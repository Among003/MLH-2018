#include <iostream>
#include <string.h>

#include "Grid.h"
#include "Ship.h"
#include "Player.h"


void PlaceShips(Player);


int main(int argc, char const *argv[]){
	std::string p1, p2 = "a";

	std::cout << "__________________________________________________________" << std::endl;
	std::cout << "                     BATTLESHIP                           " << std::endl;
	std::cout << "__________________________________________________________" << std::endl;

	//std::cout << "Enter Player1's name: ";
	//std::cin >> p1;

	//std::cout << "Enter Player2's name: ";
	//std::cin >> p2;

	Player Player1 = Player(p1);
	//Player Player2 = Player(p2);

	//Grid*  practiceGrid = new Grid();
	
	
	//practiceGrid->printBoard();
	
	Player1.getGrid()->printBoard();
	
	PlaceShips(Player1);
	
	Player1.getEnemy()->printBoard();
	//PlaceShips(Player2);
	
	//Player1.getGrid()->printBoard();



	return 0;
}

void PlaceShips(Player player){

	int x1, y1, x2, y2 = 0;
	Ship AC = Ship(5);
	Ship BtlShip = Ship(4);
	Ship Sub = Ship(3);
	Ship Cruiser = Ship(3);
	Ship Destroyer = Ship(2);

	do {
		std::cout << player.getname() << " place ships." << std::endl;
		std::cout << "Place Aircraft Carrier (size 5): " << std::endl;
		std::cout << "Enter coordinate for beginning of ship: ";
		std::cin >> x1;
		std::cin >> y1;
		std::cout << "Enter coordinate for end of ship: ";
		std::cin >> x2;
		std::cin >> y2;
	}while(!player.getGrid()->setShip(AC, x1, y1, x2, y2));

	player.getGrid()->printBoard();


	do {
		std::cout << player.getname() << " place ships." << std::endl;
		std::cout << "Place BattleShip (size 4): " << std::endl;
		std::cout << "Enter coordinate for beginning of ship: ";
		std::cin >> x1;
		std::cin >> y1;
		std::cout << "Enter coordinate for end of ship: ";
		std::cin >> x2;
		std::cin >> y2;
	}while(!player.getGrid()->setShip(BtlShip, x1, y1, x2, y2));

	player.getGrid()->printBoard();





}
