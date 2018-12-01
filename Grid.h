#ifndef __GRID_H__
#define __GRID_H__

#include <iostream>
#include <cmath>
#include <string.h>
#include "Ship.h"

class Grid{
  public:
	Grid();
	~Grid();
	void setShip(Ship* S, int x1, int y1, int x2, int y2);
	bool setHit(int x, int y);
	bool isValid(Ship* S, int x, int y, int x2, int y2);
	void printBoard();
  private:
  	int GameBoard [10][10]; 
  	int health = 17; 
	
};




#endif
