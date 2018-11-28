/************************************************************************************************* 
** Author: Chris Matian 
** Date: 08/08/2017
** Description: This is the main file that starts the game, creates a new board, and also holds the int main() for running the game.
*************************************************************************************************/ 

#include "TicTacToe.hpp"

// Constructor Initialization
TicTacToe::TicTacToe(char firstMove) {
    playerTurn = firstMove;
}

// Method for play();
void TicTacToe::play() {
    // Creates the newBoard for play.
    int status = newBoard.gameState();
    // Holds x and y position that player inputs.
    int xPos, yPos;

    // Print the empty board once
    newBoard.print();

    // Primary do/while loop that runs through each player's turn and updates the game board.
    do {
        // Input validation check.
        // This while loop will run and check to see if the user input is valid. It assumes that the user has entered an integer
        // however, if the user inputs a non-int, the loop will throw up an output saying to re-enter the data and re-reun the inputs.
        // Please note this isn't perfect - I spent roughly two hours implementing this and and finally got something that didn't endlessly spam 
        // and clog the console. If you have any suggestions, please let me know how I can individually check the cin for xPos and yPos without 
        // forcing the user to start from scratch on the input. I would like for it to only ask the user to input the failed value, i.e if they successfully
        // input x but fail y, it won't have them start over by inputting x again - it'll only ask them to correctly input y.  
        // Converts the character to uppercase
        cout << "Player " << static_cast<char>(toupper(playerTurn)) << " please enter your move." << endl;
        cin >> xPos >> yPos;
        if(cin.fail()) {
            cin.clear();
            cin.ignore();
            cout << "Incorrect inputs, please start over and input integer values for the x and y coordinates." << endl;
        } else {
            if(newBoard.makeMove(xPos, yPos, playerTurn)) {
                // Record Move
                newBoard.makeMove(xPos, yPos, playerTurn);

                // Print Board
                newBoard.print();

                // Status Update
                status = newBoard.gameState();
                // This conditional will swap out the player's turns after each completed input.
                if (playerTurn == 'x') {
                    playerTurn = 'o';
                } else {
                    playerTurn = 'x';
                }
            } else {
                cout << "Sorry, that square is already taken. Try a different spot!" << endl;
            }
        }
    }while(status == UNFINISHED);

    // Conditionals for whether a player has won or the game ended in a draw. Outputs the result. 
    if (status == X_WON) {
        cout << "*~~~~~~~~~~~~~~~~~~~~~~*" << endl;
        cout << "*~~~ Player X Wins! ~~~*"  << endl;
        cout << "*~~~~~~~~~~~~~~~~~~~~~~*" << endl;
    } else if (status == O_WON) {
        cout << "*~~~~~~~~~~~~~~~~~~~~~~*" << endl;
        cout << "*~~~ Player O Wins! ~~~*"  << endl;
        cout << "*~~~~~~~~~~~~~~~~~~~~~~*" << endl;
    } else if (status == DRAW) {
        cout << "*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*" << endl;
        cout << "*~~~ Bummer! The game has ended in a draw! ~~~*"  << endl;
        cout << "*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*" << endl;
    }
}

int main() {

    char startingPlayer;
    char again; // Play another game y/n

    // Simple do/while loop that runs automatically, but at the end the player can choose to run the loop or stop and exit to the application.
    do {
        cout << "*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*" << endl;
        cout << "*~~~ Welcome! Let's play a game of Tic-Tac-Toe ~~~*" << endl;
        cout << "*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*" << endl << endl;
        cout << "Who should start first, x or o?" << endl;
        cin >> startingPlayer;

        // This conditional will make sure that the user only inputs x or o. 
        while(startingPlayer != 'x' && startingPlayer != 'o') {
            cout << "Please enter either 'x' or 'o' [case sensitive]" << endl;
            cin >> startingPlayer;
        }

        // Pointer variable for *newGame
        TicTacToe *newGame;
        
        // Create a newGame and grab the char value from startingPlayer
        newGame = new TicTacToe(startingPlayer);
        // Start the game
        newGame->play();

        // Delete game instance when completed to prevent memory leaks.
        delete newGame;

        // Query the user for whether they would like to play again, if N then the game will exit the do/while loop.
        cout << "Would you like to play another game of Tic-Tac-Toe? [Y/N]" << endl;
        cin >> again;

    }while(again == 'Y' || again == 'y');
    return 0;
}
