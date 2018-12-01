#include <iostream>
#include <string.h>


int main(int argc, char const *argv[]){

	int GameBoard[10][10];
	memset(GameBoard, 0, sizeof(GameBoard));

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


	return 0;
}