#include "Player.h"

Player::Player(string name){
	this->name = name;
	Grid*  MyGrid = new Grid;
	Grid*  EnemyGrid = new Grid;
}
Player::~Player(){}

string Player:: getname(){
	return name;
}



