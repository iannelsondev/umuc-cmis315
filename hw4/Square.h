// Single defintion
#ifndef SQUARE_H
#define SQUARE_H

/**
 * Class definition for Square
 *
 * Ian Nelson
 * CMIS315
 * Homework 4
 * Jeff H. Sanford
 */
class Square {
    private:
        char state;
    public:
        Square();
        ~Square();
        bool setX();
        bool setO();
        char get();
};

// Terminate definition.
#endif