/**
 * Data structure encapsulating tic-tac-toe board state
 *
 * Ian Nelson
 * CMIS315
 * Homework 4
 * Jeff H. Stanford
 */

// Class/Library includes.
#include <iostream>
#include "Board.h"
#include "Square.h"

// Define std namespace for method access.
using namespace std;

/**
 * Default constructor
 */
Board::Board () { };

/**
 * Default destructor
 */
Board::~Board () {
    // Nothing to destruct.
};

/**
 * Sets a place on the board
 *
 * @param  x     X coordinate on the board
 * @param  y     Y coordinate on the board
 * @param  state Player state (X/O)
 * @return       Indicator if state was changed
 */
bool Board::set (int x, int y, char state) {
    bool isSuccessful;

    if (state == 'X') {
        isSuccessful = squares[x - 1][y - 1].setX();
    }

    if (state == 'O') {
        isSuccessful = squares[x - 1][y - 1].setO();
    }
};

/**
 * Gets the state of a square on the board
 *
 * @param  x X coordinate on the board
 * @param  y Y coordinate on the board
 * @return     Character representing the player state (X/O)
 */
char Board::get (int x, int y) {
    return squares[x - 1][y - 1].get();
};

/**
 * Prints the state of the board
 */
void Board::print () {
    cout << "    1 2 3 " << endl;
    cout << "1 [ " << squares[0][0].get() << " " << squares[1][0].get() << " " << squares[2][0].get() << " ]" << endl;
    cout << "2 [ " << squares[0][1].get() << " " << squares[1][1].get() << " " << squares[2][1].get() << " ]" << endl;
    cout << "3 [ " << squares[0][2].get() << " " << squares[1][2].get() << " " << squares[2][2].get() << " ]" << endl;
    cout << endl;
};

/**
 * Checks the board for winning combinations of moves.
 *
 * @return The winning state character ('X'/'O'), or no winner ('-')
 */
char Board::check () {
    // Initialize winner variable to neutral ('-').
    char winner = '-';

    /* Checks for player 'X' */

    // Horizontal rows.
    if (squares[0][0].get() == 'X' && squares[1][0].get() == 'X' && squares[2][0].get() == 'X') { winner = 'X'; }
    if (squares[0][1].get() == 'X' && squares[1][1].get() == 'X' && squares[2][1].get() == 'X') { winner = 'X'; }
    if (squares[0][2].get() == 'X' && squares[1][2].get() == 'X' && squares[2][2].get() == 'X') { winner = 'X'; }
    // Vertical rows
    if (squares[0][0].get() == 'X' && squares[0][1].get() == 'X' && squares[0][2].get() == 'X') { winner = 'X'; }
    if (squares[1][0].get() == 'X' && squares[1][1].get() == 'X' && squares[1][2].get() == 'X') { winner = 'X'; }
    if (squares[2][0].get() == 'X' && squares[2][1].get() == 'X' && squares[2][2].get() == 'X') { winner = 'X'; }
    // Diagonals.
    if (squares[0][0].get() == 'X' && squares[1][1].get() == 'X' && squares[2][2].get() == 'X') { winner = 'X'; }
    if (squares[0][2].get() == 'X' && squares[1][1].get() == 'X' && squares[2][0].get() == 'X') { winner = 'X'; }

    /* Checks for player 'O' */

    // Horizontal rows.
    if (squares[0][0].get() == 'O' && squares[1][0].get() == 'O' && squares[2][0].get() == 'O') { winner = 'O'; }
    if (squares[0][1].get() == 'O' && squares[1][1].get() == 'O' && squares[2][1].get() == 'O') { winner = 'O'; }
    if (squares[0][2].get() == 'O' && squares[1][2].get() == 'O' && squares[2][2].get() == 'O') { winner = 'O'; }
    // Vertical rows
    if (squares[0][0].get() == 'O' && squares[0][1].get() == 'O' && squares[0][2].get() == 'O') { winner = 'O'; }
    if (squares[1][0].get() == 'O' && squares[1][1].get() == 'O' && squares[1][2].get() == 'O') { winner = 'O'; }
    if (squares[2][0].get() == 'O' && squares[2][1].get() == 'O' && squares[2][2].get() == 'O') { winner = 'O'; }
    // Diagonals.
    if (squares[0][0].get() == 'O' && squares[1][1].get() == 'O' && squares[2][2].get() == 'O') { winner = 'O'; }
    if (squares[0][2].get() == 'O' && squares[1][1].get() == 'O' && squares[2][0].get() == 'O') { winner = 'O'; }

    // Return the winning state character.
    return winner;
};