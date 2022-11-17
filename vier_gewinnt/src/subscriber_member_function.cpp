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

#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

// Turtle Move klasse
// #include "mv.cpp"

#define G_WIDTH 7
#define G_HEIGHT 6

using std::placeholders::_1;

void split_string(std::string input);
int pos[2];

// Game Functions
void playerMove(int player, int column);
void drawCoin(int row, int column, int player);
int getLowest(int column);
void printArray();
// Game Attributes
int field[G_HEIGHT][G_WIDTH];
int player = 0; // 0 = empty, 1 = player1 , 2 = player2
int column = 0; // 0-6
int playerTurn = 1; // changes after playerMove
int firstMove = 1;

class MinimalSubscriber : public rclcpp::Node
{
public:
  MinimalSubscriber()
  : Node("minimal_subscriber")
  {
    subscription_ = this->create_subscription<std_msgs::msg::String>(
      "players", 1, std::bind(&MinimalSubscriber::topic_callback, this, _1));


  }
  int getPlayer();
  int getCoord();

private:
  void topic_callback(const std_msgs::msg::String & msg) const
  {
    std::string message = msg.data.c_str();
    split_string(message);
    //RCLCPP_INFO(this->get_logger(), "Player:%d, Column%d", pos[0], pos[1]);
  }
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  std::cout << "Spiel bereit! Warte auf Spielerinput" << std::endl;

  // Create TurtleMV
  rclcpp::spin(std::make_shared<MinimalSubscriber>());
  rclcpp::shutdown();
  return 0;
}

void split_string(std::string input)
{
  std::string letter = "";

  pos[0] = (int)(input[0])-48; // -48 da (int) den Ascii wert castet
  pos[1] = (int)(input[2])-48;

  // Spielmove wird berechnet und validiert
  playerMove(pos[0],pos[1]);
}

// Gamecontroller
void playerMove(int player, int column){
    // if this is the first move, controller turtle needs to go to the start position
    if(firstMove){
      // TurtleMV turtle("controller");
      // turtle.goDirectToSquare(START_X, START_Y);      // Start
      // turtle.stop_handler();
      firstMove = 0;
    }

    // check for correct player
    if(player != playerTurn){
        std::cout << "Spieler " << playerTurn << " ist dran!" <<std::endl;
        return;
    }
    column--; // Player eingabe ist zwischen 1 und 7. Array ist zw. 0 und 6
    
    //checks if valid move
    int row = getLowest(column);
    if(row>=7){
        // invalid move
        // dont change playerTurn
        std::cout << "Ungueltiger Zug von Spieler " << player << std::endl;
        return;
    }
    // Valid Move
    // set array
    field[row][column] = playerTurn;

    drawCoin(row,column,playerTurn);
    // Change player Turn
    if(playerTurn == 1)
        playerTurn = 2;
    else
        playerTurn = 1;
}

void drawCoin(int row, int column, int player){
    int test = column;
    test+=row;
    // drawAufruf
    // TurtleMV turtle("controller");
    // turtle.markSquare(row,column);
    // turtle.stop_handler();

    // clear Terminal window
    std::cout << "\033[2J\033[1;1H";
    printf("Zug von Spieler %d!\n",player);
    printArray();
}

// Returns lowest empty Row. If Column is full return 7
int getLowest(int column){
    int lowestEmptyRow = 0;
    for (int i = 0; i < 7 ; i++){
        if(field[i][column]==0){
            lowestEmptyRow=i;
            return lowestEmptyRow;
        }
    }
    return 7;
}

void printArray(){
  // outer loop for row
  for(int i=G_HEIGHT-1; i>=0; i--) {
      // inner loop for column
      for(int j=0; j<G_WIDTH; j++) {
	 if(field[i][j]==0){
	   printf("  ");
	 }else{
	   printf("%d ", field[i][j]);
	 }
      }
    printf("\n");
  }
  printf("-------------\n");
  printf("1 2 3 4 5 6 7");
  printf("\n\n");
}


int MinimalSubscriber::getPlayer()
{
  return pos[0];
}

int MinimalSubscriber::getCoord()
{
  return pos[1];
}
