#include "Captain.h"
#include <cmath> 
#include <iostream>
using namespace std;


Captain::Captain(int x, int y, string t)
    : Infantry(x, y, t) 
{
    attackPower = 1; 
    hitPoints = 20; 
}


void Captain::attack(Unit* target) 
{
    // checking if the target exists and both units are alive
    if (!target || !isAlive || !target->getIsAlive()) 
    {
        cout << "Invalid target or unit is dead!" << endl;

        return;
    }

    
    double distance = sqrt(pow(xPosition - target->getXPosition(), 2) + pow(yPosition - target->getYPosition(), 2));

    // within same range and team
    if (distance <= range && team == target->getTeam()) 
    {
        // restoring hit points
        target->setHitPoints(20);
        cout << "Captain rallied a friendly unit! Target HP restored to 20." << endl;
    }
    else 
    {
       
        cout << "Cannot rally non-friendly or out-of-range unit!" << endl;
    }
}