#include "Compass.h"
#include <iostream>
#include <random>
#include <chrono>

Compass::Compass() {
    setRandomDirection();
}

void Compass::setRandomDirection() {
    std::mt19937 generator(std::chrono::high_resolution_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<int> distribution(0, 3);
    int randomNum = distribution(generator);

    // Map the random number to a direction
    switch (randomNum) {
        case 0:
            dir = NORTHDIR;
        case 1:
            dir = SOUTHDIR;
        case 2:
            dir = EASTDIR;
        case 3:
            dir = WESTDIR;
    }
}

direction Compass::getDirection() {
    return dir;
}

void Compass::setDirection(direction dir) {
    this->dir = dir;
}