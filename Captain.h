#ifndef CAPTAIN_H
#define CAPTAIN_H

#include "Infantry.h"

// captain in the game
class Captain : public Infantry 
{
public:

    Captain(int x = 0, int y = 0, string t = "us");

    void attack(Unit* target) override;
};

#endif