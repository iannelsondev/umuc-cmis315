/**
 * Tic Tac Toe game
 *
 * Ian Nelson
 * CMIS315
 * Homework 4
 * Jeff H. Sanford
 */

// Class/Library includes
#include <iostream>
#include "TicTacToe.h"

// Define std namespace for method access.
using namespace std;

/**
 * Start point of the program
 *
 * @return Exit code
 */
int main () {
    // Create a new Tic Tac Toe game.
    TicTacToe* game = new TicTacToe();

    // Start the game.
    game->start();

    // While the game is not won...
    while (game->won() != true) {
        game->changePlayer();
        game->next();
    }

    // Game has been won. Make the announcement.
    if (game->moves() < 9) {
        cout << "Player " << game->active() << " has won the game!" << endl << endl;
    }
    // Game is drawn.
    else {
        cout << "Player X and O are in a draw!" << endl << endl;
    }

    // Final display.
    cout << "Final board:" << endl << endl;

    // Terminate the game.
    game->end();

    // Exit cleanly.
    return 0;
};