#ifndef COMPASS_H
#define COMPASS_H

enum direction {NORTHDIR, SOUTHDIR, EASTDIR, WESTDIR};

class Compass {
public:
    Compass();

    void setDirection(direction dir);

    direction getDirection();

    void setRandomDirection();

private:
    direction dir;

};

#endif //COMPASS_H