/**
 * Project 1 - Calculate speeding ticket fines
 *
 * Ian Nelson
 * CMIS315
 * Project 1
 * Jeff H. Sanford
 */

// Class/Library includes.
#include <iostream>
#include "FineCalculator.h"
#include "FineMenu.h"

using namespace std;

/**
 * Main program execution
 * 
 * @return Exit code
 */
int main () {
	// Repeat the menu until told not to.
	int repeat = 1;

	// Create an instance of the menu.
	FineMenu* menu = new FineMenu();

	// Print court fine description.
	menu->courtDescription();	

	// Get the court fine.
	int courtFine = menu->courtFine();

	while (repeat == 1) {
		// Get the speeding offense.
		int speedingOffense = menu->speedingOffense();

		// Get the speed limit.
		int speedLimit = menu->speedLimit();

		// Get the driver's speed.
		int drivingSpeed = menu->drivingSpeed();

		// Create an instance of the fine calculator
		FineCalculator* calc = new FineCalculator(courtFine);

		// Print the fine output.
		cout << "The total fine is $" << calc->getFine(speedingOffense, speedLimit, drivingSpeed) << endl << endl;

		// Ask for a repeat of a ticket.
		repeat = menu->repeatFineCalculation();
	}

	// Exit cleanly.
	return 0;
};