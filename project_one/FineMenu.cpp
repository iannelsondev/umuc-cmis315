#include <iostream>
#include "FineMenu.h"

using namespace std;

/**
 * Fine calculator menu options and input sanitizing.
 *
 * Ian Nelson
 * CMIS315
 * Project 1
 * Jeff H. Sanford
 */

/**
 * Default constuctor
 */
FineMenu::FineMenu() {};

/**
 * Default destructor
 */
FineMenu::~FineMenu() {};

/**
 * Prints description of fine calculations
 */
void FineMenu::courtDescription() {
	// Print general fine guidance.
	cout << "General Speeding Fine: $5 per mile over speed limit plus Court Fees" << endl;
	cout << "Speeding Highway Work Zone Fine: $6 per mile over speed limit plus Court Fees" << endl;
	cout << "Speeding in a Residential District Fine: $7 per mile over speed limit plus $200 plus Court Fees" << endl;
	cout << endl;
};

/**
 * Input and sanitization of court fees
 * 
 * @return Court fees
 */
int FineMenu::courtFine() {
	// Initialize court fees to a bad value.
	int courtFees = -1;

	// While court fees is a bad value...
	while (courtFees < 0) {
		// Input court fees from the user.
		cout << "Enter court fees: ";
		cin >> courtFees;

		// If input was good and numerically correct...
	    if (cin.good() && courtFees >= 0) {
	        // Integer input is good, nothing to do.
	    }
	    else {
	        // 'cin' bad bit set. Flush and reassign.
	        cin.clear();
	        string ignoreLine;
	        getline(cin, ignoreLine);
	        courtFees = -1;
	    }
	}

	// Space the input.
	cout << endl;

	// Return court fees.
	return courtFees;
};

/**
 * Returns the speeding offense type
 * 
 * @return Speeding offense type
 */
int FineMenu::speedingOffense() {
	// Initialize court fees to a bad value.
	int offense = -1;

	// While court fees is a bad value...
	while (offense < 0) {
		// Input court fees from the user.
		cout << "Enter the type of speeding offense (1 for regular, 2 for highway, 3 for residential): ";
		cin >> offense;

		// If input was good and numerically correct...
	    if (cin.good() && (offense > 0 && offense <= 3) ) {
	        // Integer input is good, nothing to do.
	    }
	    else {
	        // 'cin' bad bit set. Flush and reassign.
	        cin.clear();
	        string ignoreLine;
	        getline(cin, ignoreLine);
	        offense = -1;
	    }
	}

	// Space the input.
	cout << endl;

	// Return court fees.
	return offense;
};

/**
 * Returns the speed limit
 * 
 * @return Speed limit
 */
int FineMenu::speedLimit() {
	// Initialize court fees to a bad value.
	int speedLimit = -1;

	// While court fees is a bad value...
	while (speedLimit < 0) {
		// Input court fees from the user.
		cout << "Enter the speed limit: ";
		cin >> speedLimit;

		// If input was good and numerically correct...
	    if (cin.good() && speedLimit > 0) {
	        // Integer input is good, nothing to do.
	    }
	    else {
	        // 'cin' bad bit set. Flush and reassign.
	        cin.clear();
	        string ignoreLine;
	        getline(cin, ignoreLine);
	        speedLimit = -1;
	    }
	}

	// Space the input.
	cout << endl;

	// Return speed limit.
	return speedLimit;
};

/**
 * Returns the driving speed
 * 
 * @return Driving speed
 */
int FineMenu::drivingSpeed() {
	// Initialize court fees to a bad value.
	int drivingSpeed = -1;

	// While court fees is a bad value...
	while (drivingSpeed < 0) {
		// Input court fees from the user.
		cout << "Enter the vehicle speed: ";
		cin >> drivingSpeed;

		// If input was good and numerically correct...
	    if (cin.good() && drivingSpeed > 0) {
	        // Integer input is good, nothing to do.
	    }
	    else {
	        // 'cin' bad bit set. Flush and reassign new value (0).
	        cin.clear();
	        string ignoreLine;
	        getline(cin, ignoreLine);
	        drivingSpeed = -1;
	    }
	}

	// Space the input.
	cout << endl;

	// Return court fees.
	return drivingSpeed;
};

/**
 * Returns option to create a new ticket
 * 
 * @return Repeat flag
 */
int FineMenu::repeatFineCalculation() {
	// Initialize court fees to a bad value.
	int repeat = -1;

	// While court fees is a bad value...
	while (repeat < 0) {
		// Input court fees from the user.
		cout << "Enter 1 to enter another ticket or 0 to quit this fine calculator: ";
		cin >> repeat;

		// If input was good and numerically correct...
	    if (cin.good() && (repeat >= 0 && repeat < 2)) {
	        // Integer input is good, nothing to do.
	    }
	    else {
	        // 'cin' bad bit set. Flush and reassign new value (0).
	        cin.clear();
	        string ignoreLine;
	        getline(cin, ignoreLine);
	        repeat = -1;
	    }
	}

	// Space the input.
	cout << endl;

	// Return court fees.
	return repeat;
};