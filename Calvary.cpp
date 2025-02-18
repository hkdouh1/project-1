#include "Calvary.h"
#include <cstdlib> 
#include <iostream>
using namespace std;


Calvary::Calvary(int x, int y, string t)
    : Unit(10, 5, 5, x, y, t) {}


void Calvary::move() 
{
    // decide a random direction (0 - up, 1 - down, 2 - left, 3 - right)
    int direction = rand() % 4;

    // decide how many steps to move (up to 10 units)
    int steps = rand() % 11;

    // move the Calvary based on the direction
    if (direction == 0) 
    {
        yPosition += steps; // move up
    }
    else if (direction == 1) 
    {
        yPosition -= steps; // move down
    }
    else if (direction == 2) 
    {
        xPosition -= steps; // move left
    }
    else if (direction == 3) 
    {
        xPosition += steps; // move right
    }


    cout << "Calvary moved to (" << xPosition << ", " << yPosition << ")" << endl;
}