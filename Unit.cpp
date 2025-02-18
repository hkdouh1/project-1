#include "Unit.h"
#include <iostream>
using namespace std;

// Constructor for the Unit class
Unit::Unit(int hp, double r, int ap, int x, int y, string t)
    : attackPower(ap), hitPoints(hp), range(r), xPosition(x), yPosition(y), team(t), isAlive(true) {}

// attack function for the unit class created
void Unit::attack(Unit* target) 
{
    // checking if the target exists and both the units are alive
    if (!target || !isAlive || !target->getIsAlive()) 
    {
        cout << "Invalid target or unit is dead!" << endl;

        return;
    }

    // calculating the distance between this unit and the target
    double distance = sqrt(pow(xPosition - target->getXPosition(), 2) + pow(yPosition - target->getYPosition(), 2));

    // checking if the target is within range
    if (distance <= range) 
    {
        // checking if the target is an enemy
        if ((team == "us" && (target->getTeam() == "them" || target->getTeam() == "chaotic")) ||
            (team == "them" && (target->getTeam() == "us" || target->getTeam() == "chaotic")) ||
            (team == "chaotic")) 
        {
            // reducing the target's hit points by this unit's attack power
            target->setHitPoints(target->getHitPoints() - attackPower);

            cout << "Attacked! Target HP: " << target->getHitPoints() << endl;
        }
        else 
        {
            cout << "Cannot attack friendly unit!" << endl;
        }
    }
    else 
    {
        cout << "Target out of range!" << endl;
    }
}


void Unit::move() 
{
    cout << "Base move function called." << endl;
}