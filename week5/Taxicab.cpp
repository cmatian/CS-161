/********************************************************************* 
** Author: Chris Matian 
** Date: 07/20/2017
** Description: This is the Taxicab class implementation file for Taxicab which contains all of the earlier declarations in Taxicab.cpp
*********************************************************************/

// Include the Taxicab class implementation file
#include "Taxicab.hpp"

// Taxicab Default Constructor
Taxicab::Taxicab() {
    xCoord = yCoord = totalDistance = 0;
}

Taxicab::Taxicab(int initialXCoord, int initialYCoord) {
    xCoord = initialXCoord;
    yCoord = initialYCoord;
    totalDistance = 0;
}

int Taxicab::getXCoord() {
    return xCoord;
}

int Taxicab::getYCoord() {
    return yCoord;
}

int Taxicab::getDistanceTraveled() {
    return totalDistance;
}

int Taxicab::moveX(int xValue) {
    int newXValue;

    // This conditional should take in the parameter that's passed in and store it so that totalDistance can increment itself by a positive number.
    if (xValue < 0) {
        newXValue = -xValue;
    } else {
        newXValue = xValue;
    }
    xCoord += xValue;
    totalDistance += newXValue;
}

int Taxicab::moveY(int yValue) {
    int newYValue;
    // This conditional should take in the parameter that's passed in and store it so that totalDistance can increment itself by a positive number.
    if (yValue < 0) {
        newYValue = -yValue;
    } else {
        newYValue = yValue;
    }
    yCoord += yValue;
    totalDistance += newYValue;
}