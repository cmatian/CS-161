/********************************************************************* 
** Author: Christopher Matian
** Date: July 5th, 2017
** Description: A small program that outputs remaining change from a value (0-99)
*********************************************************************/ 

#include <iostream>
using namespace std;

int main() {
    int QUARTERS = 25,
        DIMES = 10,
        NICKELS = 5,
        PENNIES = 1;


    unsigned int change,
        remainingQuarters,
        remainingDimes,
        remainingNickels,
        remainingPennies;
    
    // Prompt User        
    cout << "Please enter an amount in cents less than a dollar: \n";
    cin >> change;
    cout << change << endl;
    
    // Calculate Quarters;
    remainingQuarters = change / QUARTERS;
    change = change % QUARTERS;
    
    // Calculate Dimes
    remainingDimes = change / DIMES;
    change = change % DIMES;
    
    // Calculate Nickels
    remainingNickels = change / NICKELS;
    change = change % NICKELS;
    
    // Calculate Pennies
    remainingPennies = change / PENNIES;
    change = change % PENNIES;
    
    cout << "Your change will be: \n";
    cout << "Q: " << remainingQuarters << endl;
    cout << "D: " << remainingDimes << endl;
    cout << "N: " << remainingNickels << endl;
    cout << "P: " << remainingPennies << endl;
    
	return 0;
}