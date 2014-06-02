/**
 * Data structure representing Tic Tac Toe game
 *
 * Ian Nelson
 * CMIS315
 * Homework 4
 * Jeff H. Sanford
 */

// Class/Library includes.
#include <iostream>
#include "TicTacToe.h"
#include "Board.h"

// Define std namespace for method access.
using namespace std;

/**
 * Default constructor
 */
TicTacToe::TicTacToe () {
    move = 0;
    activePlayer = 'X';
    gameWon = false;
};

/**
 * Default destructor
 */
TicTacToe::~TicTacToe () {
    // Nothing to destroy.
};

/**
 * Changes the active player
 */
void TicTacToe::changePlayer () {
    if (activePlayer == 'X') {
        activePlayer = 'O';
    }
    else {
        activePlayer = 'X';
    }
};

/**
 * Starts the game process
 */
void TicTacToe::start () {
    cout << "Welcome to Tic Tac Toe!" << endl;
    cout << "-----------------------" << endl;
    cout << "The game starts with an. empty board, noted by '-' in the grid square" << endl;
    cout << "Player 1 starts, and is represented by 'X'." << endl;
    cout << "Player 2 is represented by 'O'." << endl;
    cout << "A player will not be allowed to mark a square that is already taken." << endl;
    cout << "To mark a square, enter the coordinates in the format: '# #' (X, Y) " << endl;
    cout << endl;
    next();
};

/**
 * Ends the game.
 */
void TicTacToe::end () {
    board.print();
};

/**
 * Executes the next step in the game
 */
void TicTacToe::next () {
    int x, y;
    bool isSuccessful = false;

    // Tell active player it's their turn.
    cout << "Your turn player " << activePlayer << endl << endl;

    // Print the board status.
    board.print();

    // While the user has not given a correct response...
    while (isSuccessful == false) {
        // Ask the player for their move.
        cout << "What square would you like to mark? ";
        cin >> x; cin >> y;

        // Was the input good?
        if (cin.good()) {
            // Attempt to set the board square.
            isSuccessful = board.set(x, y, activePlayer);
        }
        // Nope, malformed.
        else {
            // 'cin' bad bit set. Flush and reassign new value (0).
            cin.clear();
            string ignoreLine;
            getline(cin, ignoreLine);
        }

        cout << endl;
    }

    // When a move is corrently assigned, tell the player.
    cout << "Player set " << activePlayer << " on (" << x << "," << y << ")" << endl;

    // Iterate the number of moves.
    move++;

    // Check to see if the game was won.
    if (board.check() != '-') {
        gameWon = true;
    }

    // Check to see if a draw occurred.
    if (move >= 9) {
        gameWon = true;
    }
};

/**
 * Checks to see if game state is won
 *
 * @return Indicator if game has been won.
 */
bool TicTacToe::won () {
    return gameWon;
};

/**
 * Gets the active player
 *
 * @return Character representing active player
 */
char TicTacToe::active () {
    return activePlayer;
};

/**
 * Returns the number of moves
 *
 * @return Number of moves taken
 */
int TicTacToe::moves () {
    return move;
};