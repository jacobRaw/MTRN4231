#include <functional>
#include <memory>
#include <thread>

#include "input_interfaces/action/user_input.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
// #include "rclcpp_components/register_node_macro.hpp"

// #include "user_input/visibility_control.h"

class UserInterfaceActionServer : public rclcpp::Node
{
public:
  using user_interface = input_interfaces::action::UserInput;
  using GoalHandleUserInterface = rclcpp_action::ServerGoalHandle<user_interface>;

  explicit UserInterfaceActionServer(const rclcpp::NodeOptions & options = rclcpp::NodeOptions())
  : Node("user_interface_action_server", options)
  {
    RCLCPP_INFO(this->get_logger(), "constructor_server");
    using namespace std::placeholders;

    this->action_server_ = rclcpp_action::create_server<user_interface>(
      // this->get_node_base_interface(),
      // this->get_node_clock_interface(),
      // this->get_node_logging_interface(),
      // this->get_node_waitables_interface(),
      this,
      "user_interface",
      std::bind(&UserInterfaceActionServer::handle_goal, this, _1, _2),
      std::bind(&UserInterfaceActionServer::handle_cancel, this, _1),
      std::bind(&UserInterfaceActionServer::handle_accepted, this, _1));
  }

private:
  rclcpp_action::Server<user_interface>::SharedPtr action_server_;

  rclcpp_action::GoalResponse handle_goal(
    const rclcpp_action::GoalUUID & uuid,
    std::shared_ptr<const user_interface::Goal> goal)
  {
    RCLCPP_INFO(this->get_logger(), "Received goal with command %s", goal->command.c_str());
    (void)uuid;
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse handle_cancel(
    const std::shared_ptr<GoalHandleUserInterface> goal_handle)
  {
    RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
    (void)goal_handle;
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void handle_accepted(const std::shared_ptr<GoalHandleUserInterface> goal_handle)
  {
    using namespace std::placeholders;
    // this needs to return quickly to avoid blocking the executor, so spin up a new thread
    std::thread{std::bind(&UserInterfaceActionServer::execute, this, _1), goal_handle}.detach();
  }

  void execute(const std::shared_ptr<GoalHandleUserInterface> goal_handle)
  {
    RCLCPP_INFO(this->get_logger(), "Executing goal");
    // sets the loop to run at 1Hz
    rclcpp::Rate loop_rate(1);
    const auto goal = goal_handle->get_goal();
    auto feedback = std::make_shared<user_interface::Feedback>();
    auto & progress = feedback->progress;
    auto & state_msg = feedback->state_msg;
    progress = 0;
    state_msg = "";

    auto result = std::make_shared<user_interface::Result>();

    for (int i = progress; (i <= 100) && rclcpp::ok(); i++) {
      // Check if there is a cancel request
      if (goal_handle->is_canceling()) {
        result->progress = progress;
        result->state_msg = state_msg;
        result->success = false;
        goal_handle->canceled(result);
        RCLCPP_INFO(this->get_logger(), "Goal canceled");
        return;
      }

      progress = i;
      if (progress < 15) {
        state_msg = "navigating to orchard";
      } else if (progress < 60) {
        state_msg = "picking fruit";
      } else if (progress < 75) {
        state_msg = "navigating to drop-off point";
      } else if (progress < 95) {
        state_msg = "Unloading fruit";        
      } else {
        state_msg = "Returning to home pose";
      }
  
      // Publish feedback
      goal_handle->publish_feedback(feedback);
      RCLCPP_INFO(this->get_logger(), "Feedback: progress - %d%%, state - %s", progress, state_msg.c_str());

      // sleeps the thread to meet the loop rate
      loop_rate.sleep();
    }

    // Check if goal is done
    if (rclcpp::ok()) {
      result->progress = progress;
      result->state_msg = state_msg;
      result->success = true;
      goal_handle->succeed(result);
      RCLCPP_INFO(this->get_logger(), "Goal succeeded");
    }
  }
};  // class UserInterfaceActionServer


int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto action_server = std::make_shared<UserInterfaceActionServer>();
  rclcpp::spin(action_server);
  rclcpp::shutdown();
  return 0;
}