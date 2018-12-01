#ifndef __SHIP_H__
#define __SHIP_H__

class Ship{
  public:
	Ship(int x);
	~Ship();
	int getSize();
  private:
  	int size;
};


#endif