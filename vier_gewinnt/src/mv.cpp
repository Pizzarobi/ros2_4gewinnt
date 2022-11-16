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

#define START_X 3.5
#define START_Y 6.5

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

        mtx.lock();  // Used to handle the threads
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

    // Move to the STARTING-POINT then to the square to mark them with the turtle pen
    // !!! DEFINES !!!
    bool markSquare(_Float32 x, _Float32 y)
    {
        
        goDirectToSquareCent(START_X, START_Y); // Starting Point
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));


        // Start
        goDirectToSquare(x, START_Y);   // First move to the left or right
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        

        goDirectToSquareTop(x, y);     // Then move down :-) -> To the top of the square
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));

        // @Robert  hier set pen AN

        goDirectToSquare(x, y);      // Draw a line down
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));

        // @Robert  hier set pen AUS

        goDirectToSquareCent(START_X, START_Y); // Back to start
        
        return true;
    }

    // Move direct to the CENTER of a square (also horizontal)
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

        // DEBUG:
        // std::cout << "\033[2J\033[1;1H";
        // std::cout << "Soll: " << x << " Ist: " << x << std::endl;
        // std::cout << "Soll: " << y << " Ist: " << y << std::endl;
        // std::cout << "---" << std::endl;

        return true;

    }

    // Move direct to the TOP of the square (also horizontal!)
    bool goDirectToSquareTop(_Float32 x, _Float32 y)
    {
        _Float32 sx, sy;
        sx = 2.75 + ((x-1) * 1.5);
        sy = 1.50 + ((y-1) * 1.5);

        mtx.lock();
        geometry_msgs::msg::Twist twist;
        twist.linear.x = sx - c_x;
        twist.linear.y = sy - c_y;
        mv_pub->publish(twist);
        mtx.unlock();
        

        if((sx == c_x) && (sy == c_y)) std::cout << "OK" << std::endl;


        // DEBUG:
        // std::cout << "\033[2J\033[1;1H";
        // std::cout << "Soll: " << x << " Ist: " << x << std::endl;
        // std::cout << "Soll: " << y << " Ist: " << y << std::endl;
        // std::cout << "---" << std::endl;

        return true;

    }

    // Move direct to the square (also horizontal!)
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


        // DEBUG:
        // std::cout << "\033[2J\033[1;1H";
        // std::cout << "Soll: " << x << " Ist: " << x << std::endl;
        // std::cout << "Soll: " << y << " Ist: " << y << std::endl;
        // std::cout << "---" << std::endl;

        return true;

    }

    // Move the turtle to the given coordinate
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

    // Draw a circle. EXPERIMENTAL!!! Does not work very well..
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

    // Sets the theta -> heading
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
    // Thread-Function: Spins the SubscriberNode
    void sub_spinner()
    {
        rclcpp::spin(sub_node);
    }

    // Thread-Function: Spins the MoverNode
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

    --EINE TURTLE MIT DEM NAMEN "turtle1" MUSS GESPAWNT WERDEN
    -- sonst hängt der mv code in einer ununterbrechbaren dauerschleife haha
    -- daher blocke ich hiermit den compiler :-)

    TurtleMV turtle("turtle1");     // Turtle Move-Object

    turtle.goDirectToSquare(START_X, START_Y);      // Start
    std::cout << "\033[2J\033[1;1H";
    std::cout << "Press any key..."<< std::endl;
    while (std::cin.get(c) && c != '\n');           // @Robert das ist drin damit die Turtle nicht mit move-
                                                    // Anfragen zugemüllt wird... Weil sonst buggt das rum aber i mean wir 
                                                    // haben ja ausgemacht, dass man was sehen soll xD
    

    // Paar Punkte zum Testen
    turtle.markSquare(1,3);
    std::cout << "\033[2J\033[1;1H";
    std::cout << "Press any key..."<< std::endl;
    while (std::cin.get(c) && c != '\n');

    turtle.markSquare(4,4);
    std::cout << "\033[2J\033[1;1H";
    std::cout << "Press any key..."<< std::endl;
    while (std::cin.get(c) && c != '\n');

    turtle.markSquare(2,1);
    std::cout << "\033[2J\033[1;1H";
    std::cout << "Press any key..."<< std::endl;
    while (std::cin.get(c) && c != '\n');

    turtle.markSquare(6,5);
    std::cout << "\033[2J\033[1;1H";
    std::cout << "Press any key..."<< std::endl;
    while (std::cin.get(c) && c != '\n');

    turtle.markSquare(3,2);
    std::cout << "\033[2J\033[1;1H";
    std::cout << "Press any key..."<< std::endl;
    while (std::cin.get(c) && c != '\n');


    turtle.stop_handler();  // !!! This joins the threads !!!

    rclcpp::shutdown();

    return 0;
}
