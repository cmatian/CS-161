/********************************************************************* 
** Author: Chris Matian 
** Date: 07/24/2017
** Description: Main testing file for Quadratics
*********************************************************************/
#include <iostream>
#include "Quadratic.hpp"
using std::cout;
using std::endl;

int main() {

    Quadratic quad1(1.7, 2.3, 4.8);
    //quad1.setC(1.5);
    std::cout << quad1.getA() << endl;
    std::cout << quad1.valueFor(7) << endl;
    std::cout << quad1.numRealRoots() << endl;

    return 0;
}