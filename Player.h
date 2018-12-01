#include <iostream>

class Player{
	
	public:
		Player(string);
		~Player();
		string getname();
	private:
		string name;
		Grid MyGrid*;
		Grid EnemyGrid*;


};
