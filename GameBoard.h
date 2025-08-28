#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include "Tile.h"

class GameBoard{
    private:
        static const int width = 16;        //static width of the board
        static const int length = 16;       //static length of the board
        int playerCount;                    //number of players playing in the current round
        Tile board[width][length];          //array of tiles which makes up the board

    public:

    //Constructor
    GameBoard(int playerCount);

    //Initializes the game board with default tiles and player-specific settings
    void initialize();

    //Prints the current state of the board to the console
    void printBoard();
};

#endif