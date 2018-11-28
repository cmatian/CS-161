/********************************************************************* 
** Author: Chris Matian 
** Date: 07/15/2017
** Description: Program that reorders numbers in ascending order. 
*********************************************************************/ 

#include <iostream>
using std::cout;
using std::endl;

// Function Prototypes
void smallSort(int&, int&, int&);
void getValues(int&, int&, int&);

/*
int main() {
    // variable declarations
    int small, middle, big;
    
    getValues(small, middle, big);
    
    smallSort(small, middle, big);
    
    cout << small << ", " << middle << ", " << big << endl;
    
    
	return 0;
}
*/

void getValues(int &storedVal1, int &storedVal2, int &storedVal3) {
    storedVal1 = 14;
    storedVal2 = -90;
    storedVal3 = 2;
}

void smallSort(int &val1, int &val2, int &val3) {

    int temp;
    
    if (val1 > val2) {
        temp = val1;
        val1 = val2;
        val2 = temp;
    }
    
    if (val1 > val3) {
        temp = val1;
        val1 = val3;
        val3 = temp;
    }
    
    if (val2 > val3) {
        temp = val2;
        val2 = val3;
        val3 = temp;
    }
}