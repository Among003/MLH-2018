#include "Ship.h"

Ship::Ship(int x){
	this->size = x;
}

Ship::~Ship();

int Ship::getSize(){
	return this->size;
}
