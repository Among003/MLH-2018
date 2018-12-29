#include "Player.h"

Player::Player(){}

Player::Player(std::string name){
	this->name = name;
	MyGrid = new Grid();
	EnemyGrid = new Grid();
}
Player::~Player(){}

std::string Player::getname(){
	return name;
}

Grid* Player::getGrid(){
	return MyGrid;
}

Grid* Player::getEnemy(){
	return EnemyGrid;
}