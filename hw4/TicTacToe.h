// Single definition
#ifndef TICTACTOE_H
#define TICTACTOE_H

// Class/Library includes.
#include "Board.h"

/**
 * Class definition for TicTacToe
 *
 * Ian Nelson
 * CMIS315
 * Homework 4
 * Jeff H. Sanford
 */
class TicTacToe {
    private:
        int move;
        Board board;
        char activePlayer;
        bool gameWon;
    public:
        TicTacToe();
        ~TicTacToe();
        void start();
        void end();
        void next();
        bool won();
        int moves();
        char active();
        void changePlayer();
};

// Terminate definition
#endif