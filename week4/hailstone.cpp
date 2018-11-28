/********************************************************************* 
** Author: Chris Matian 
** Date: 07/15/2017
** Description: Hailstone sequence performs checks for whether a value
**              is even or odd and runs equations until it's equal to 1.
*********************************************************************/ 

#include <iostream>
using std::cout;
using std::endl;

// Function Prototypes
void getValues(int&, int&);
void calcValue(int&, int&); 

//main function
/*
int main() {
    int integer,
        counter;
        
    getValues(integer, counter);
    
    calcValue(integer, counter);
    
    cout << integer << ", " << counter << endl;
    
	return 0;
}
*/

//getInitial function

void getValues(int& val1, int& val2) {
    val1 = 3;
    val2 = 0;
}

//calcValue function

void calcValue(int& num1, int& num2) {
    while(num1 != 1) {
        if(num1 % 2 == 0) {
            num1 = num1 / 2;
            num2++;
        } else {
            num1 = num1 * 3 + 1;
            num2++;
        }   
    }
}
