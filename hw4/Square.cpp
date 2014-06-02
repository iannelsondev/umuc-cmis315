/**
 * Data structure encapsulating tic-tac-toe square state
 *
 * Ian Nelson
 * CMIS315
 * Homework 4
 * Jeff H. Stanford
 */

// Class/Library includes.
#include "Square.h"

/**
 * Default constructor, sets neutral state
 */
Square::Square () {
    state = '-';
};

/**
 * Default destructor
 */
Square::~Square () {
    // Nothing to destruct.
};

/**
 * Sets the square's state to 'X'
 *
 * @return State indicating if state was set
 */
bool Square::setX () {
    // State set by default.
    bool set = true;

    // Neutral state?
    if (state == '-') {
        // Set it to 'X'.
        state = 'X';
        set = true;
    }
    // Nope.
    else {
        set = false;
    }

    return set;
};

/**
 * Sets the square's state to 'O'
 *
 * @return State indicating if state was set
 */
bool Square::setO () {
    // State set by default.
    bool set = true;

    // Neutral state?
    if (state == '-') {
        state = 'O';
        set = true;
    }
    // Nope.
    else {
        set = false;
    }

    return set;
};

/**
 * Retrieves the square's state
 *
 * @return State of the square
 */
char Square::get () {
    return state;
};