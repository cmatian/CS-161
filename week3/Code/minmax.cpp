/**************************************************************************************************************************** 
** Author: Christopher Matian
** Date: July 10th, 2017
** Description: Program that prompts the user for an input, asks the user to input a set of integers, and outputs the min and max values of that set. 
*****************************************************************************************************************************/ 

#include <iostream>
using namespace std;

int main() {
    int numOfValues,
        values,
        counter = 1, // Initialize Counter as 1
        max,
        min;
    
    // Prompt user for integer value
    cout << "How many integers would you like to enter?\n";
    cin >> numOfValues;
    cout << numOfValues << endl;
    
    cout << "Please enter " << numOfValues << " integers.\n";
    for (int i = 0; i<numOfValues; i++) {
        
        cin >> values;
        cout << values << endl;
        
        if (i == 0) {
            min = values,
            max = values;
        } else {
            if (values > max) {
                max = values;
            }
            
            if (values < min) {
                min = values;
            }
        };
    };
    
    
    cout << "min: " << min << endl << "max: " << max;

	return 0;
}