/********************************************************************* 
** Author: Christopher Matian
** Date: July 5th, 2017
** Description: A small program that takes the sum of five numbers and outputs their averages.
*********************************************************************/ 

#include <iostream>
using namespace std;

int main() {
    // Declare Variables
    double number1,
        number2,
        number3,
        number4,
        number5,
        sum;
        
    // Display Query
    cout << "Please enter Five Numbers:" << endl;
    // User input
    cin >> number1 >> number2 >> number3 >> number4 >> number5;
    // Display Numbers
    cout << number1 << endl << number2 << endl << number3 << endl << number4 << endl << number5 << endl;
    // Add Sum
    sum = number1 + number2 + number3 + number4 + number5;
    // Display Total Sum
    cout << "The total sum is: " << sum << endl;
    // Average of the sum
    cout << "The average of those numbers is: " << sum/5;

	return 0;
}