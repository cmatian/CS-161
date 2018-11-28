/********************************************************************* 
** Author: Chris Matian 
** Date: 07/20/2017
** Description: This is the Box class implementation file that contains all of the functions that will be executed by the client application int main()
*********************************************************************/

// Include the Box class implementation file
#include "Box.hpp"

// Box Default Constructor

Box::Box() {
    height = width = length = 1.0;
}

// Box Constructor for 3 parameters

Box::Box(double boxHeight, double boxWidth, double boxLength) {
    height = Box::setHeight(boxHeight); 
    width = Box::setWidth(boxWidth);
    length = Box::setLength(boxLength);
}

// DATA VALIDATION

double Box::setHeight(double heightCheck) {

    if(heightCheck >= 0) {
        height = heightCheck;
    }
}

double Box::setWidth(double widthCheck) {

    if(widthCheck >= 0) {
        width = widthCheck; 
    }

}

double Box::setLength(double lengthCheck) {

    if(lengthCheck >= 0) {
        length = lengthCheck; 
    }
}

// DATA CALCULATION

double Box::calcVolume() {
    return length * width * height;
}

double Box::calcSurfaceArea() {
    return (2 * height * width) + (2 * length * height) + (2 * width * length);
}