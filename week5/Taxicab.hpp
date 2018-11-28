/********************************************************************* 
** Author: Chris Matian 
** Date: 07/20/2017
** Description: This is the class specification file for Taxicab which is included into Taxicab.cpp and possibly the int main() file.
*********************************************************************/

// Class specification file.
#ifndef TAXI_HPP
#define TAXI_HPP

//Box class declaration
class Taxicab {
    private:
        // Variable Declarations
        int xCoord; // X Coordinate
        int yCoord; // Y Coordinate
        int totalDistance; // Total Distance Travelled
    public:
        // Constructor Prototypes
        Taxicab();
        Taxicab(int, int);

        // Function Prototypes
        int getXCoord();
        int getYCoord();
        int getDistanceTraveled();
        int moveX(int);
        int moveY(int);
};
#endif