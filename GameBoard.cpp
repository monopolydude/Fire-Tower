#include <iostream>
#include <string>
#include "GameBoard.h"
#include "Tile.h"

using namespace std;

//constructor
GameBoard::GameBoard(int playerCount){
    this->playerCount = playerCount;
}
//initizalization for the board, sets initial tile data and player locations
void GameBoard::initialize(){

    //setting every tile to be a forest initially
    for(int x = 0; x < width; x++){
        for(int y = 0; y < length; y++){
            board[x][y] = Tile(x, y);
        }
    }

    //setting the eternal flames at the center
    board[7][7].setTileType(1);
    board[7][8].setTileType(1);
    board[8][7].setTileType(1);
    board[8][8].setTileType(1);

    //setting the plaer's firetowers
    switch (playerCount){
        case 2:
            //player 1
            for(int x = 0; x < 3; x++){
                for(int y = 0; y < 3; y++){
                    board[x][y].setTileType(2);
                }
            }
            board[0][0].setTileType(3);

            //player 2
                        for(int x = 13; x < width; x++){
                for(int y = 13; y < length; y++){
                    board[x][y].setTileType(2);
                }
            }
            board[15][15].setTileType(3);
            break;
    }

}

//prints the current state of each tile to the console
void GameBoard::printBoard(){
    for(int x = 0; x < width; x++){
        for(int y = 0; y < length; y++){
            board[x][y].printTile();
        }
        cout << endl;
    }
}