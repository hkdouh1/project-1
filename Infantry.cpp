#include "Infantry.h"
#include <cstdlib> 
#include <iostream>
using namespace std;


Infantry::Infantry(int x, int y, string t)
    : Unit(5, sqrt(2), 5, x, y, t) 
{   
    // Set hitPoints = 5, range = sqrt(2), attackPower = 5
    // Setting up the Infantry's properties: hitPoints, range, attackPower, position, and team
}


void Infantry::move() 
{
    // deciding whether to move in the x-direction or y-direction
    bool moveX = rand() % 2;

    // decide how many steps to move (max 5 units)
    int steps = rand() % 6;

  
    if (moveX) 
    {
        // move horizontally (x+/-)
        if (rand() % 2) 
        {
            xPosition += steps; // Move right
        }
        else 
        {
            xPosition -= steps; // Move left
        }
    }
    else 
    {
        // move vertically (y+/-)
        if (rand() % 2) 
        {
            yPosition += steps; // Move up
        }
        else 
        {
            yPosition -= steps; // Move down
        }
    }

   
    cout << "Infantry moved to (" << xPosition << ", " << yPosition << ")" << endl;
}