#include <functional>
#include <future>
#include <memory>
#include <string>
#include <sstream>

#include "input_interfaces/action/user_input.hpp"

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"


class StartActionClient : public rclcpp::Node
{
public:
  using user_interface = input_interfaces::action::UserInput;
  using GoalHandleUserInterface = rclcpp_action::ClientGoalHandle<user_interface>;

  explicit StartActionClient(const rclcpp::NodeOptions & options = rclcpp::NodeOptions())
  : Node("start_action_client", options), goal_done_(false)
  {
    this->client_ptr_ = rclcpp_action::create_client<user_interface>(
        this,
        "user_interface"
    );

      RCLCPP_INFO(this->get_logger(), "constructor");
    this->timer_ = this->create_wall_timer(
      std::chrono::milliseconds(500),
      std::bind(&StartActionClient::send_goal, this));
  }

   bool is_goal_done() const
  {
    return this->goal_done_;
  }

  void send_goal()
  {
    using namespace std::placeholders;

    this->timer_->cancel();
    this->goal_done_ = false;

    if (!this->client_ptr_->wait_for_action_server(std::chrono::seconds(10))) {
      RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
      this->goal_done_ = true;
      return;
    }

    auto goal_msg = user_interface::Goal();
    goal_msg.command = "start";
    goal_msg.parameters = "";

    RCLCPP_INFO(this->get_logger(), "Sending goal");

    auto send_goal_options = rclcpp_action::Client<user_interface>::SendGoalOptions();
    send_goal_options.goal_response_callback =
      std::bind(&StartActionClient::goal_response_callback, this, _1);

    send_goal_options.feedback_callback =
      std::bind(&StartActionClient::feedback_callback, this, _1, _2);

    send_goal_options.result_callback =
      std::bind(&StartActionClient::result_callback, this, _1);
      
    this->client_ptr_->async_send_goal(goal_msg, send_goal_options);
  }

private:
  rclcpp_action::Client<user_interface>::SharedPtr client_ptr_;
  rclcpp::TimerBase::SharedPtr timer_;
  bool goal_done_;

  void goal_response_callback(const GoalHandleUserInterface::SharedPtr & goal_handle)
  {
    if (!goal_handle) {
      RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server");
    } else {
      RCLCPP_INFO(this->get_logger(), "Goal accepted by server, waiting for result");
    }
  }

  void feedback_callback(
    GoalHandleUserInterface::SharedPtr,
    const std::shared_ptr<const user_interface::Feedback> feedback)
  {
    std::stringstream ss;
    ss << "Progress: " << feedback->progress << "%" << ", State: " << feedback->state_msg;
    RCLCPP_INFO(this->get_logger(), ss.str().c_str());
  }

  void result_callback(const GoalHandleUserInterface::WrappedResult & result)
  {
    this->goal_done_ = true;
    switch (result.code) {
      case rclcpp_action::ResultCode::SUCCEEDED:
        break;
      case rclcpp_action::ResultCode::ABORTED:
        RCLCPP_ERROR(this->get_logger(), "Goal was aborted");
        return;
      case rclcpp_action::ResultCode::CANCELED:
        RCLCPP_ERROR(this->get_logger(), "Goal was canceled");
        return;
      default:
        RCLCPP_ERROR(this->get_logger(), "Unknown result code");
        return;
    }

    std::stringstream ss;
    ss << "Fruit picking succeeded: " << result.result->state_msg;
 
    RCLCPP_INFO(this->get_logger(), ss.str().c_str());
    rclcpp::shutdown();
  }
};  // class StartActionClient

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto action_client_node = std::make_shared<StartActionClient>();

  while (!action_client_node->is_goal_done()) {
    rclcpp::spin_some(action_client_node);
  }

  rclcpp::shutdown();
  return 0;
}