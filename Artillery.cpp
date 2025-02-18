#include "Artillery.h"
#include <cstdlib> 
#include <iostream>
using namespace std;


Artillery::Artillery(int x, int y, string t)
    : Unit(1, 10, 10, x, y, t) {}


void Artillery::move() 
{
    // decide a random direction (0 - up, 1 - down, 2 - left, 3 - right)
    int direction = rand() % 4;

    // moving only 1 unit
    if (direction == 0) 
    {
        yPosition += 1; // move up
    }
    else if (direction == 1) 
    {
        yPosition -= 1; // move down
    }
    else if (direction == 2) 
    {
        xPosition -= 1; // move left
    }
    else if (direction == 3) 
    {
        xPosition += 1; // move right
    }

  
    cout << "Artillery moved to (" << xPosition << ", " << yPosition << ")" << endl;
}