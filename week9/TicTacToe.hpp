/************************************************************************************************* 
** Author: Chris Matian 
** Date: 08/08/2017
** Description: This is the header and class definition file for starting the game and creating a new board.
*************************************************************************************************/ 

#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP
#include "Board.hpp"

class TicTacToe {
    public: 
        // Constructor
        TicTacToe(char);

        // Methods
        void play(); //starts the game

    private:
        Board newBoard;
        char playerTurn;
    
};
#endif