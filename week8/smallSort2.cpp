/********************************************************************* 
** Author: Chris Matian 
** Date: 08/02/2017
** Description: Application that sorts three integer parameters, referenced by address, into ascending order using pointers.
*********************************************************************/
#include <iostream>
using std::cout;
using std::endl;

// Function Prototype that indicates the parameters are pointing to an int
// It is not necessary to specify the name of the variable in the prototype.
void smallSort2(int *, int *, int *);

// int main for testing purposes - comment out later
/*
int main() {
    int a = 14,
        b = -90,
        c = 2;

    smallSort2(&a, &b, &c);
    cout << a << ", " << b << ", " << c << endl;


    return 0;
}
*/

// smallSort2 Function
// This function uses pointers to point to the addresses of the passed in parameters.
void smallSort2(int *val1, int *val2, int *val3) {

    int temp;

    if (*val1 > *val2) {
        temp = *val1; 
        *val1 = *val2; 
        *val2 = temp; 
    } 
    
    if (*val1 > *val3) {
        temp = *val1; 
        *val1 = *val3; 
        *val3 = temp; 
    }
    
    if (*val2 > *val3) {
        temp = *val2;
        *val2 = *val3;
        *val3 = temp;
    }
}