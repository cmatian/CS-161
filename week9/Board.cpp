/************************************************************************************************* 
** Author: Chris Matian 
** Date: 08/08/2017
** Description: Board.cpp contains all of the constructors and functions for Board.hpp
*************************************************************************************************/ 

#include <iostream>
#include "Board.hpp"

// Default Constructor for Initializing the board to empty.
Board::Board() {
    turn = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            board[i][j] = '.';
        }
    }
}

// Methods
bool Board::makeMove(int xCoord, int yCoord, char TicPlayer) {
    if (board[xCoord][yCoord] == '.') {
        board[xCoord][yCoord] = TicPlayer;
        return true;
    } else {
        return false;
    }
}

int Board::gameState() {
    turn++;
    char winner = '.';

    // So in gameState() I basically mapped out all of the possible winning combinations
    // and initialized winner to whatever that result was inside of the winning square/combo.  


    // Conditional for Row 0 (right)
    if ((board[0][0] == 'x' || board[0][0] == 'o') && (board[0][0] == board[0][1] && board[0][0] == board[0][2])) {
        winner = board[0][0];
    // Conditional for Column 0 (down)
    } else if ((board[0][0] == 'x' || board[0][0] == 'o') && (board[0][0] == board[1][0] && board[0][0] == board[2][0])) {
        winner = board[0][0];
    // Conditional for Row 1 (right)
    } else if ((board[1][0] == 'x' || board[1][0] == 'o') && (board[1][0] == board[1][1] && board[1][0] == board[1][2])) {
        winner = board[1][0];
    // Conditional for Col 1 (down)
    } else if ((board[0][1] == 'x' || board[0][1] == 'o') && (board[0][1] == board[1][1] && board[0][1] == board[2][1])) {
        winner = board[0][1];
    // Conditional for Row 2 (right)
    } else if ((board[2][0] == 'x' || board[2][0] == 'o') && (board[2][0] == board[2][1] && board[2][0] == board[2][2])) {
        winner = board[2][0];
    // Conditional for Col 2 (down)
    } else if ((board[0][2] == 'x' || board[0][2] == 'o') && (board[0][2] == board[1][2] && board[0][2] == board[2][2])) {
        winner = board[0][2];
    // Conditional for Row starting at 0,0 and going diagonally to 2,2
    } else if ((board[0][0] == 'x' || board[0][0] == 'o') && (board[0][0] == board[1][1] && board[0][0] == board[2][2])) {
        winner = board[0][0];
    // Conditional for Row starting at 2,0 and going diagonally to 0,2
    } else if ((board[2][0] == 'x' || board[2][0] == 'o') && (board[2][0] == board[1][1] && board[2][0] == board[0][2])) {
        winner = board[2][0];
    }

    // Declares who the winner is and returns that value.

    if (winner == 'x') {
        return X_WON;
    } else if (winner == 'o') {
        return O_WON;
    } else if (turn == 10) {
        return DRAW;
    } else {
        return UNFINISHED;
    }
}

// This is the image for the board.

void Board::print() {
    cout << "       |       |       |       " << endl;
    cout << "       |   0   |   1   |   2   " << endl;
    cout << "_______|_______|_______|_______" << endl;
    cout << "       |       |       |       " << endl;
    cout << "   0   |   "<< board[0][0] <<"   |   "<< board[0][1] <<"   |   "<< board[0][2] << endl;
    cout << "_______|_______|_______|_______" << endl;
    cout << "       |       |       |       " << endl;
    cout << "   1   |   "<< board[1][0] <<"   |   "<< board[1][1] <<"   |   "<< board[1][2] << endl;
    cout << "_______|_______|_______|_______" << endl;
    cout << "       |       |       |       " << endl;
    cout << "   2   |   "<< board[2][0] <<"   |   "<< board[2][1] <<"   |   "<< board[2][2] << endl;
    cout << "       |       |       |       " << endl << endl;
}


