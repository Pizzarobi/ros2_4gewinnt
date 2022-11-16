#include <memory>
#include <iostream>
#include <utility>
#include <cmath>
#include <thread>
#include <string>
#include <mutex>
#include <cstdlib>

#include "rclcpp/rclcpp.hpp"
#include "vier_gewinnt/msg/pose.hpp"
#include <geometry_msgs/msg/twist.hpp>

using std::placeholders::_1;

class TurtleMV
{
public:
    TurtleMV();
    TurtleMV(std::string pname)
    {
        name = pname;
        sub_topic = "/" + name + "/pose";
        sub_node = rclcpp::Node::make_shared((name + "Sub"));
        sub_handle = sub_node->create_subscription<vier_gewinnt::msg::Pose>(sub_topic, 10, std::bind(&TurtleMV::sub_callb, this, _1));
        spinT = std::thread(std::bind(&TurtleMV::sub_spinner, this));

        mtx.lock();
        mv_topic = "/" + name + "/cmd_vel";
        mv_node = rclcpp::Node::make_shared((name + "MV"));
        mv_pub = mv_node->create_publisher<geometry_msgs::msg::Twist>(mv_topic, 1);
        mvT = std::thread(std::bind(&TurtleMV::mv_spinner, this));
    }

    void sub_callb(const vier_gewinnt::msg::Pose &pose)
    {
        mtx.try_lock();
        c_x = pose.x + 1;
        c_y = pose.y;
        c_theta = pose.theta;
        mtx.unlock();
    }

    bool goToSquare(_Float32 x, _Float32 y)
    {
        std::string string_x = std::to_string(x);
        std::string string_y = std::to_string(y);
        
        goDirectToSquare(3.5, 6.5);
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        goDirectToSquare(x, y);

        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        

        std::cout << "OK" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        goDirectToSquare(3.5, 6.5);
        
    }


    bool goDirectToSquareCent(_Float32 x, _Float32 y)
    {
        _Float32 sx, sy;
        sx = 2.75 + ((x-1) * 1.5);
        sy = 1.75 + ((y-1) * 1.5);

        mtx.lock();
        geometry_msgs::msg::Twist twist;
        twist.linear.x = sx - c_x;
        twist.linear.y = sy - c_y;
        mv_pub->publish(twist);
        mtx.unlock();

        if((sx == c_x) && (sy == c_y)) std::cout << "OK" << std::endl;

        std::cout << "\033[2J\033[1;1H";
        std::cout << "Soll: " << x << " Ist: " << x << std::endl;
        std::cout << "Soll: " << y << " Ist: " << y << std::endl;
        std::cout << "---" << std::endl;

    }

    bool goDirectToSquare(_Float32 x, _Float32 y)
    {
        _Float32 sx, sy;
        sx = 2.75 + ((x-1) * 1.5);
        sy = 1.00 + ((y-1) * 1.5);

        mtx.lock();
        geometry_msgs::msg::Twist twist;
        twist.linear.x = sx - c_x;
        twist.linear.y = sy - c_y;
        mv_pub->publish(twist);
        mtx.unlock();
        

        if((sx == c_x) && (sy == c_y)) std::cout << "OK" << std::endl;

        std::cout << "\033[2J\033[1;1H";
        std::cout << "Soll: " << x << " Ist: " << x << std::endl;
        std::cout << "Soll: " << y << " Ist: " << y << std::endl;
        std::cout << "---" << std::endl;

    }

    bool goTo(_Float32 x, _Float32 y)
    {
        geometry_msgs::msg::Twist twist;
        mtx.lock();
        twist.linear.x = x - c_x;
        twist.linear.y = y - c_y;
        mv_pub->publish(twist);
        mtx.unlock();

        return true;
    }

    bool makeCirc()
    {
        geometry_msgs::msg::Twist twist;
        mtx.lock();
        twist.linear.x = 0.5 * 2 * M_PI;
        twist.angular.z = 2*M_PI;
        mv_pub->publish(twist);
        mtx.unlock();

        return true;
    }

    bool setTheta(_Float32 theta)
    {
        geometry_msgs::msg::Twist twist;
        mtx.lock();
        twist.angular.z = theta - c_theta;
        mv_pub->publish(twist);
        mtx.unlock();

        return true;
    }

    _Float32 getX()
    {
        return c_x;
    }

    _Float32 getY()
    {
        return c_y;
    }

    _Float32 getTheta()
    {
        return c_theta;
    }

    void stop_handler()
    {
        std::cout << "Exit with ctrl + c" << std::endl;
        mvT.join();
        spinT.join();
    }

private:
    void sub_spinner()
    {
        rclcpp::spin(sub_node);
    }

    void mv_spinner()
    {
        rclcpp::spin(mv_node);
    }

    rclcpp::Node::SharedPtr sub_node;
    rclcpp::Node::SharedPtr mv_node;
    rclcpp::Subscription<vier_gewinnt::msg::Pose>::SharedPtr sub_handle;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr mv_pub;
    std::thread mvT;
    std::thread spinT;
    std::mutex mtx;
    std::string sub_topic;
    std::string mv_topic;
    std::string name;
    _Float32 c_x;
    _Float32 c_y;
    _Float32 c_theta;
};

//####################################################################################################################
// Main
//####################################################################################################################

int main(int argc, char *argv[])
{
    char c;
    rclcpp::init(argc, argv);

    // Start

    TurtleMV turtle("turtle1");

    turtle.goDirectToSquare(1,1);
    while (std::cin.get(c) && c != '\n');
    turtle.goDirectToSquare(3,3);
    while (std::cin.get(c) && c != '\n');
    turtle.goToSquare(4,3);
    while (std::cin.get(c) && c != '\n');
    turtle.goToSquare(5,2);
    while (std::cin.get(c) && c != '\n');
    turtle.goToSquare(3,1);
    while (std::cin.get(c) && c != '\n');
    turtle.goToSquare(5,1);
    while (std::cin.get(c) && c != '\n');
    turtle.goToSquare(1,4);
    while (std::cin.get(c) && c != '\n');

    turtle.stop_handler();

    rclcpp::shutdown();

    return 0;
}
