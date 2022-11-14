#include <chrono>
#include <functional>
#include <memory>
#include <string>


#include <geometry_msgs/msg/twist.hpp>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;



class MinimalPublisher : public rclcpp::Node
{
  public:
    MinimalPublisher()
    : Node("gc_pub"), count_(0)
    {

      // Topic festlegen -> Turtlename beachten
      twist_pub_ = this->create_publisher<geometry_msgs::msg::Twist>("turtle1/cmd_vel", 1);
      
      timer_ = this->create_wall_timer(
      5000ms, std::bind(&MinimalPublisher::timer_callback, this));
    }

  private:
    void timer_callback()
    {
    
      geometry_msgs::msg::Twist twist;
      twist.angular.z = 4;
      twist.linear.x = 1;

      twist_pub_->publish(twist);

    }
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr twist_pub_;

    rclcpp::TimerBase::SharedPtr timer_;

    size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalPublisher>());
  rclcpp::shutdown();
  return 0;
}