/********************************************************************* 
** Author: Chris Matian 
** Date: 07/24/2017
** Description: Function file for the Quadratic Function
*********************************************************************/
#include <iostream>
#include <cmath>
#include "Quadratic.hpp"

using std::abs;


// Default Constructor that initializes a, b and c to 1.0
Quadratic::Quadratic() {
    a = b = c = 1.0;
}

// Constructor for 3 parameters that initializes the coefficients (a,b,c)
Quadratic::Quadratic(double initializeA, double initializeB, double initializeC) {
    a = initializeA;
    b = initializeB;
    c = initializeC;
}

// Setters
// Initializes the coefficient a to initialA
void Quadratic::setA(double initialA) {
    a = initialA;
}

// Initializes the coefficient b to initialB
void Quadratic::setB(double initialB) {
    b = initialB;
}

// Initializes the coefficient c to initialC
void Quadratic::setC(double initialC) {
    c = initialC;
}

// Getters
// Returns the value stored in a when the function getA() is called.
double Quadratic::getA() {
    return a;
}

// Returns the value stored in b when the function getB() is called.
double Quadratic::getB() {
    return b;
}

// Returns the value stored in c when the function getC() is called.
double Quadratic::getC() {
    return c;
}


// Calculations
// Returns the value for X when valueFor() receives an argument.
double Quadratic::valueFor(double x) {
    return ((a * (x*x)) + (b * x) + (c));
}

// Returns either 0, 1, or 2 (the number of real roots) based on the value stored in storeRealRoots after running the function.
double Quadratic::numRealRoots() {
    double storeRealRoots;

    storeRealRoots = ((b*b) - (4 * a * c));

    if (abs(storeRealRoots > 0.00001)) {
        return 2;
    } else if (abs(storeRealRoots < 0.00001)) {
        return 0;
    } else {
        return 1;
    }
}