/********************************************************************* 
** Author: Christopher Matian
** Date: July 5th, 2017
** Description: A small program that converts celsius to fahrenheit 
*********************************************************************/ 

#include <iostream>
using namespace std;

int main() {
    
    double celsius;
    
    // Prompts user
    cout << "Please enter a Celsius Temperature." << endl;
    
    // Stores input into Celsius variable
    cin >> celsius;
    
    // Display store temperature in celsius
    cout << celsius << endl;
    
    // Calculate and display temperature in fahrenheit
    cout << "The Equivalent Fahrenheit temperature is:" << endl << (celsius * 9/5) + 32;
	return 0;
}