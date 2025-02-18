#ifndef INFANTRY_H
#define INFANTRY_H

#include "Unit.h"


class Infantry : public Unit 
{
public:
 
    Infantry(int x = 0, int y = 0, string t = "us");

    void move() override;
};

#endif