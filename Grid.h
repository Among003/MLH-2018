#ifndef __GRID_H__
#define __GRID_H__

class Grid{
  public:
	Grid();
	~Grid();
	void setShip(Ship*, int x, int y);
	void setHit(int x, int y);
  private:
  	int GameBoard [10][10]; 
	
};




#endif