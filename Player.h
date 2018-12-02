#ifndef __PLAYER_H__
#define __PLAYER_H__
#include "Grid.h"
#include <iostream>
#include <string>


class Player{
	
	public:
		Player();
		Player(std::string name);
		~Player();
		std::string getname();
	private:
		std::string name;
		Grid* MyGrid;
		Grid* EnemyGrid;


};

#endif