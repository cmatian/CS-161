/********************************************************************* 
** Author: Chris Matian 
** Date: 07/20/2017
** Description: main file that tests Taxicab.cpp and Taxicab.hpp objects 
*********************************************************************/

// DO NOT SUBMIT THIS FILE
// DO NOT SUBMIT THIS FILE
// DO NOT SUBMIT THIS FILE
// DO NOT SUBMIT THIS FILE
// DO NOT SUBMIT THIS FILE
// DO NOT SUBMIT THIS FILE
// DO NOT SUBMIT THIS FILE

#include <iostream>
#include "Taxicab.hpp"
using std::cout;
using std::endl;

int main() {
    Taxicab cab1;
    Taxicab cab2(5, -8);

    cab1.moveX(10);
    cab1.moveY(-100);
    cout << "Cab 1 X Coordinate: " << cab1.getXCoord() << endl;
    cout << "Cab 1 Y Coordinate: " << cab1.getYCoord() << endl;
    cout << "Cab 1 Distance Travelled: " << cab1.getDistanceTraveled() << endl;

    cab2.moveX(-100);
    cab2.moveY(7);
    cout << "Cab 2 X Coordinate: " << cab2.getXCoord() << endl;
    cout << "Cab 2 Y Coordinate: " << cab2.getYCoord() << endl;
    cout << "Cab 2 Distance Travelled: " << cab2.getDistanceTraveled() << endl;


    return 0; 
}
