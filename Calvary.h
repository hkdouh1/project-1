#ifndef CALVARY_H
#define CALVARY_H

#include "Unit.h"

// calvary in the game
class Calvary : public Unit 
{
public:

    Calvary(int x = 0, int y = 0, string t = "us");

// function to move calvary
    void move() override;
};

#endif