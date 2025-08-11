#ifndef TILE_H
#define TILE_H

#include <iostream>
#include <string>

//class for individual tiles
class Tile{
    private:
        int currentState;           //0 == no fire, 1 == fire, 2 == firebreak
        int tileType;               //0 == forest , 1 == eternal flame, 2 == firetower base, 3 == firetower
        int x;                      //x coordinate for the tile (not sure if needed)
        int y;                      //y coordinate for the tile (not sure if needed)
    
    public:

    //default constructor
    Tile();

    //constructor
    Tile(int x, int y);

    //setters and getters
    void setCurrentState(int currentState);
    int getCurrentState();

    void setTileType(int tileType);
    int getTileType();
    
    //print the tile to the console
    void printTile();
};

#endif