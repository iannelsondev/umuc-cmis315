// Single definition.
#ifndef BOARD_H
#define BOARD_H

// Class/Library includes.
#include "Square.h"

/**
 * Class definition for Board
 *
 * Ian Nelson
 * CMIS315
 * Homework 4
 * Jeff H. Sanford
 */
class Board {
    private:
        Square squares[3][3];
    public:
        Board();
        ~Board();
        bool set(int, int, char);
        char get(int, int);
        void print();
        char check();
};

// Terminate definition.
#endif