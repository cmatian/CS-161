/********************************************************************* 
** Author: Chris Matian 
** Date: 07/24/2017
** Description: Class specification header file for the Quadratic Function
*********************************************************************/


// Class specification file.
#ifndef QUAD_HPP
#define QUAD_HPP

class Quadratic {
    private:
        // Variable Declarations
        double a;
        double b;
        double c;
    public:
        // Constructor Prototypes
        Quadratic();
        Quadratic(double, double, double); 

        // Function Prototypes
        double getA();
        double getB();
        double getC();
        void setA(double);
        void setB(double);
        void setC(double);
        double valueFor(double);
        double numRealRoots();   
}; 
#endif