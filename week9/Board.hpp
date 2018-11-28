/************************************************************************************************* 
** Author: Chris Matian 
** Date: 08/08/2017
** Description: This is the header class specification file for initializing the Tic Tac Toe board.
*************************************************************************************************/ 
#ifndef BOARD_HPP
#define BOARD_HPP
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

// Enumerator
enum gameState {X_WON, O_WON, DRAW, UNFINISHED};


class Board {
    public:
        // Default Constructor
        Board();

        // Methods
        bool makeMove(int, int, char);
        int gameState();
        void print();

    private:
        // Board Declaration as char
        char board[3][3];
        int turn;
        
};
#endif