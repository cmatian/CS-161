/********************************************************************* 
** Author: Chris Matian 
** Date: 07/20/2017
** Description: This is the class specification file for Box which contains all of the early declarations used in Box.cpp
*********************************************************************/

// Class specification file.
#ifndef BOX_HPP
#define BOX_HPP

//Box class declaration
class Box {
    private:
        // Variable Declarations
        double height;
        double width;
        double length;
    public:
        // Constructor Prototypes
        Box();
        Box(double, double, double);

        // Function Prototypes
        double setHeight(double);
        double setWidth(double);
        double setLength(double);
        double calcVolume();
        double calcSurfaceArea();
};
#endif