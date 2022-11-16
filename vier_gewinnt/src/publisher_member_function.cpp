// Copyright 2016 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <thread>

#include <iostream>
#include "stdio.h"
#include <algorithm>
#include <bits/stdc++.h>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

// ----------------------------------------------------
//  Definition of different Functions
// ----------------------------------------------------
bool isNumber(const std::string &str);
void spinFunction();

// ----------------------------------------------------
//  Definition of global variables
// ----------------------------------------------------
int pos[3];
std::string player_message = "";

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */

class MinimalPublisher : public rclcpp::Node
{
public:
  MinimalPublisher() : Node("minimal_publisher"), count_(0)
  {
    publisher_ = this->create_publisher<std_msgs::msg::String>("players", 1);
    send_message();
    abort();
  }
  void send_message();
  std::string playernumber = "";
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
  size_t count_;
};

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  std::thread spinthread(spinFunction);
  spinthread.join();
  rclcpp::shutdown();
  return 0;
}

void spinFunction()
{
  rclcpp::spin(std::make_shared<MinimalPublisher>());
}

// Checking if input string contains number or an invalid type
bool isNumber(const std::string &str)
{
  return !str.empty() &&
         std::find_if(str.begin(), str.end(),
                      [](unsigned char c)
                      { return !std::isdigit(c); }) == str.end();
}

void MinimalPublisher::send_message()
{
  auto message = std_msgs::msg::String();
  while (playernumber == "")
  {
    std::cout << "Bitte Spielernummer waehlen. (1 oder 2)\nSpieler: ";
    std::cin >> playernumber;
    if (!isNumber(playernumber) || (((int)(playernumber[0])-48)>2) || (((int)(playernumber[0])-48)<1))
    {
      std::cout << "ERROR\n";
      playernumber = "";
    }
    // clear input buffer
    while ((getchar()) != '\n')
      ;
  }
  // Coordinate - INPUT WHILE ENDLOSSCHLEIFE
  while (1)
  {
    player_message = "";
    player_message = playernumber;
    std::string input = "";
    std::cout << "Geben Sie ihre Spalte zwischen 1 und 7 ein! Koordinate: X\nSchicke 'A' zum Abbrechen!" << '\n'
              << "Spalte:";
    std::cin >> input;

    if (input == "A" || input == "a")
    {
      break;
    }
    if (isNumber(input)&&(((int)(input[0])-48)<=7)&&(((int)(input[0])-48)>0))
    {
      player_message += '/' + input;

      message.data = player_message;
      // RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
      publisher_->publish(message);
    }else{
      std::cout << "Falsche Eingabe. Zahl zwischen 1 und 7 eingeben!\n\n\n\n\n";
    }
  }
}