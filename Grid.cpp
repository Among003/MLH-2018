#include "Grid.h"


Grid::Grid(){
	memset(GameBoard, 0, sizeof(GameBoard));
}

Grid::~Grid(){
}

void Grid:: setShip(Ship*, int x, int y){

}

void Grid:: setHit(int x, int y){


}

void Grid::printBoard(){
	system("clear");
	std::cout << "--------------------------------------------------" << std::endl;
	for(int i = 0; i < 10; ++i){
		for(int j = 0; j < 10; ++j){
			std::cout << '|';
			if(GameBoard[i][j] == 0){
				std::cout << " 0 |";
			}
			else if(GameBoard[i][j] == 1){
				std::cout << " ~ |";
			}
			else if(GameBoard[i][j] == 2){
				std::cout << " X |";
			}
		}
		std::cout << std:: endl << "--------------------------------------------------" << std::endl;

	}
}


