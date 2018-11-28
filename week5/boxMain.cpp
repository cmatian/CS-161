/********************************************************************* 
** Author: Chris Matian 
** Date: 07/20/2017
** Description: main file that tests Box.cpp and Box.hpp objects 
*********************************************************************/

// DO NOT SUBMIT THIS FILE
// DO NOT SUBMIT THIS FILE
// DO NOT SUBMIT THIS FILE
// DO NOT SUBMIT THIS FILE
// DO NOT SUBMIT THIS FILE
// DO NOT SUBMIT THIS FILE
// DO NOT SUBMIT THIS FILE

#include <iostream>
#include "Box.hpp"
using std::cout;
using std::endl;

int main() {
    Box box1(2.4, 7.1, 5.0); //Box Object declaration
    Box box2;

    cout << "Volume 1: " << box1.calcVolume() << endl;
    cout << "Surface Area 1: " << box1.calcSurfaceArea() << endl;

    cout << "Volume 2: " << box2.calcVolume() << endl;
    cout << "Surface Area 2: " << box2.calcSurfaceArea() << endl;

    return 0; 
}
