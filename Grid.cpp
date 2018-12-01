#include "Grid.h"


Grid::Grid(){
	memset(GameBoard, 0, sizeof(GameBoard));
}

Grid::~Grid(){
}

bool Grid::setShip(Ship* S, int x1, int y1, int x2, int y2){
	if(!isValid(S, x1, y1, x2, y2)){
		return false;
	}
	
	if(abs(x1 - x2)){           //Vertical Placement
		for(int i = std::min(x1, x2); i <= std::max(x1, x2); ++i){
			if(GameBoard[i][y1] != 0){
				return false;
			}
		}
	}
	else {						//Horizontal Placement
		for(int i = std::min(y1, y2); i <= std::max(y1, y2); ++i){
			if(GameBoard[x1][i] != 0){
				return false;
			}
		}
	}


		
}

bool Grid::setHit(int x, int y){
	if(x < 0 || x > 9 || y < 0 || y > 9){
		std::cout << "Invalid Shot" << std::endl;
		return false;
	}
	if(GameBoard[x][y] == 2){
		std::cout << "Already Fired" << std::endl;
		return false;
	}

	if(GameBoard[x][y] == 1){
		std::cout << "HIT!" << std::endl;
		--health;
	}
	else{
		std::cout << "MISS" << std::endl;
	}

	GameBoard[x][y] = 2;

	return true;

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


bool Grid::isValid(Ship* S, int x1, int y1, int x2, int y2){
	if(x1 < 0 || x1 > 9 || x2 < 0 || x2 > 9 || y1 < 0 || y1 > 9 || y2 < 0 || y2 > 9){
		return false;
	}
	else if(x1 != x2  && y1 != y2){
		return false;
	}
	else if(std::max(abs(x1 - x2), abs(y1 - y2)) != S->getSize()){
		return false;
	}
	if(abs(x1 - x2)){           //Vertical Placement
		for(int i = std::min(x1, x2); i <= std::max(x1, x2); ++i){
			if(GameBoard[i][y1] != 0){
				return false;
			}
		}
	}
	else {						//Horizontal Placement
		for(int i = std::min(y1, y2); i <= std::max(y1, y2); ++i){
			if(GameBoard[x1][i] != 0){
				return false;
			}
		}
	}
	
	return true;

}
