#include "Tile.h"

using namespace std;

Tile::Tile(){
    x = 0;
    y = 0;
    tileType = 0;
    currentState = 0;
}

Tile::Tile(int x, int y){
    this->x = x;
    this->y = y;
    tileType = 0;
    currentState = 0;
}

//setters and getters
void Tile::setCurrentState(int currentState){this->currentState = currentState;}
int Tile::getCurrentState(){return currentState;}

void Tile::setTileType(int tileType){
    this->tileType = tileType;
    if(tileType == 1){
        currentState = 1;
    }
}
int Tile::getTileType(){return tileType;}

//prints the current state of the tile
void Tile::printTile(){
    switch (currentState){
        case 0:
            if (tileType == 3)cout << "T";
            else(cout << "O");
            break;
        case 1: cout << "F";
            break;
        case 2: cout << "B";
            break;
    }
}