#include "Infantry.h"
#include "Artillery.h"
#include "Calvary.h"
#include "Captain.h"
#include <iostream>
using namespace std;

int main() 
{
    srand(time(0));

    // units
    Infantry infantry(0, 0, "us");
    Artillery artillery(5, 5, "them");
    Calvary calvary(10, 10, "chaotic");
    Captain captain(15, 15, "us");

    // positions
    cout << "Initial positions:" << endl;
    cout << "Infantry: (" << infantry.getXPosition() << ", " << infantry.getYPosition() << ")" << endl;
    cout << "Artillery: (" << artillery.getXPosition() << ", " << artillery.getYPosition() << ")" << endl;
    cout << "Calvary: (" << calvary.getXPosition() << ", " << calvary.getYPosition() << ")" << endl;
    cout << "Captain: (" << captain.getXPosition() << ", " << captain.getYPosition() << ")" << endl;

    // movement test
    cout << "\nTesting moves:" << endl;

    infantry.move();
    artillery.move();
    calvary.move();
    captain.move();

    // attacking test
    cout << "\nTesting attacks:" << endl;

    infantry.attack(&artillery);
    calvary.attack(&infantry);
    captain.attack(&infantry);

    return 0;
}