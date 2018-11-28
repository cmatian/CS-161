/********************************************************************* 
** Author: Chris Matian 
** Date: 07/15/2017
** Description: Program that calculates the fall distance based on the time fallen.
*********************************************************************/ 

#include <iostream>
#include <math.h>  // pow
using std::cout;
using std::endl;

// Function Prototype
double fallDistance(double value);

// Function Main (commented out as per instructions)
/*
int main() {
    
    double timeFallen = 3.0,
            distance;
            
    
    distance = fallDistance(timeFallen);
    
    cout << distance << endl;
    
	return 0;
}
*/


// Function Distance Fallen

double fallDistance(double value) {
    double result,
            gravity = 9.8;
            
    result = (1.0/2.0) * gravity * pow(value, 2);
    
    return result;
}