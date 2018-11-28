
/********************************************************************************************************** 
** Author: Christopher Matian
** Date: July 10th, 2017
** Description: Number guessing game where one user inputs a value and the other tries to guess that value.
***********************************************************************************************************/ 
#include <iostream>
using namespace std;

int main() {
    // Initializations
    bool guessCorrect = false;

    int guessCounter = 0,
        valueToGuess,
        userGuess;
        
    // Prompt user for initial number to guess 
    cout << "Please enter a number to guess.\n";
    cin >> valueToGuess;

    // cout << valueToGuess;
    
    //do-while loop that keeps going so long as guess is false
    do {
        cout << "\nPlease enter your guess.\n";
        cin >> userGuess;
        
        if (userGuess > valueToGuess) {
            cout << "Too high - try again.\n";
            guessCounter++;
        } else if (userGuess < valueToGuess) {
            cout << "Too low - try again.\n";
            guessCounter++;
        } else if (userGuess == valueToGuess) {
            guessCorrect = true;
            guessCounter++;
            cout << "You guessed it in " << guessCounter << " tries.\n";
        }

    } while(guessCorrect == false);
    return 0;
}