#ifndef UNIT_H
#define UNIT_H

#include <string>
#include <cmath> 
using namespace std;

// base class for all units in the game
class Unit 
{
protected:

    int attackPower;
    int hitPoints;
    double range;
    int xPosition;
    int yPosition;
    string team;
    bool isAlive;

public:

    Unit(int hp = 10, double r = sqrt(2), int ap = 5, int x = 0, int y = 0, string t = "us");

    virtual ~Unit() {}


    int getAttackPower() const { return attackPower; }
    int getHitPoints() const { return hitPoints; }
    double getRange() const { return range; }
    int getXPosition() const { return xPosition; }
    int getYPosition() const { return yPosition; }
    string getTeam() const { return team; }
    bool getIsAlive() const { return isAlive; }


    void setHitPoints(int hp) 
    {
        hitPoints = hp > 0 ? hp : 0; // points don't go below 0
        isAlive = hitPoints > 0;     // update alive status
    }
    void setPosition(int x, int y) 
    {
        xPosition = x;
        yPosition = y;
    }

   // function for attacking and moving
    virtual void attack(Unit* target);
    virtual void move();
};

#endif