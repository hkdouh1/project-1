#ifndef ARTILLERY_H
#define ARTILLERY_H

#include "Unit.h"

// artillary in the game
class Artillery : public Unit 
{
public:

    Artillery(int x = 0, int y = 0, string t = "us");

    void move() override;
};

#endif