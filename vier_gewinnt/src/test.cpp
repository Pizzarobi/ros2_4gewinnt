#include <iostream>
#include <cstdlib>
#include <string>
#include <math.h>
//M_PI

using namespace std;
// void createGridTurtles();
// void spawnTurtle(string x, string y, string theta, string name);
// void killTurtles(string name, int amount);
// void clearScreen();
// void teleportRelative(string name, float linear, float angular);
// void waitFor(int i);
// void setPen(string r, string g, string b, string width, string name);

// theta 0 = nach rechts

void spawnTurtle(string x, string y, string theta, string name){
	string caller = "ros2 service call /spawn vier_gewinnt/srv/Spawn \"{x: "+x+", y: "+y+", theta: "+theta+", name: '"+name+"'}\"";
	system(caller.c_str());
}

void killTurtles(string name,int amount){
	if(amount == 1){
		string caller = "ros2 service call /kill vier_gewinnt/srv/Kill \"{name: '"+name+"'}\"";
		system(caller.c_str());
	}else{
		for(int i = 0; i < amount; i++){
                	string caller = "ros2 service call /kill vier_gewinnt/srv/Kill \"{name: '"+name+to_string(i+1)+"'}\"";
                	system(caller.c_str());
		}
        }
}

void setPen(string r, string g, string b, string width, string name){
    std::string caller = "ros2 service call /"+name+"/set_pen vier_gewinnt/srv/SetPen \"{r: "+r+", g: "+g+", b: "+b+", width: "+width+"}\"";
    system(caller.c_str());
}

void teleportRelative(string name, float linear, float angular){
	string caller = "ros2 service call /"+name+"/teleport_relative vier_gewinnt/srv/TeleportRelative \"{linear: "+to_string(linear)+", angular: "+to_string(angular)+"}\"";
	system(caller.c_str());

}

int main(){
	//clearScreen();
	//spawnTurtle("1.0","1.0","0.3","test");
	// killTurtles("turtle1",1);
	//createGridTurtles();
	//killTurtles("x",7);
	//killTurtles("y",6);
	// createGridTurtles();
	// killTurtles("x",7);
	// killTurtles("y",6);
	// spawnTurtle("5.0","9.0","0.0","controller"); //to_string(M_PI/2+M_PI)
    spawnTurtle("1.0","1.0","0.0","turtle2");
	setPen("255","0","0","0","turtle2");
    teleportRelative("turtle2",1.0,1.0);


}
