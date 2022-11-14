#include <iostream>
#include <cstdlib>
#include <string>
#include <math.h>
//M_PI

using namespace std;
void createGridTurtles();
void spawnTurtle(string x, string y, string theta, string name);
void killTurtles(string name, int amount);
void clearScreen();
void teleportRelative(string name, float linear, float angular);
void waitFor(int i);

// theta 0 = nach rechts


int main(){
	//clearScreen();
	//spawnTurtle("1.0","1.0","0.3","test");
	killTurtles("turtle1",1);
	//createGridTurtles();
	//killTurtles("x",7);
	//killTurtles("y",6);
	createGridTurtles();
	killTurtles("x",7);
	killTurtles("y",6);

}

void createGridTurtles(){
	float x = 1.0;
	float y = 1.0;
	float increment = (float)9/6;
	cout << "Increment: " << increment << endl;
	for(int i = 0; i < 7; i++){
		float offset = increment*(float)i;
		cout << "testing offset " << offset << " at " << i << endl;
		spawnTurtle(to_string(x+offset),to_string(y),to_string(M_PI/2),"x"+to_string(i+1));
	}
	for(int i = 0; i < 6; i++){
		spawnTurtle(to_string(x), to_string(y+(float)i*increment),"0","y"+to_string(i+1));
	}
	for(int i = 0; i < 7; i++){
		teleportRelative("x"+to_string(i+1),increment*5,0.0);
	}
	for(int i = 0; i < 6; i++){
		teleportRelative("y"+to_string(i+1),increment*6,0.0);
	}
}

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

void clearScreen(){
	string caller = "ros2 service call /clear std_srvs/srv/Empty";
	system(caller.c_str());
}

void teleportRelative(string name, float linear, float angular){
	string caller = "ros2 service call /"+name+"/teleport_relative vier_gewinnt/srv/TeleportRelative \"{linear: "+to_string(linear)+", angular: "+to_string(angular)+"}\"";
	system(caller.c_str());

}
