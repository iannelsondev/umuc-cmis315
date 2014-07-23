/**
 * Ian Nelson
 * CMIS315
 * Final Project
 * Jeff H. Sanford
 */

#include <iostream>
#include "Menu.h"

using namespace std;

/**
 * Main execution function.
 *
 * @return Exit code.
 */
int main () {
	int choice;
    Menu *menu = new Menu();

    while (menu->isRepeating() == true) {
		choice = menu->main();
		menu->select(choice);
    }

    // Exit cleanly.
    return 0;
};
