/**
 * Ian Nelson
 * CMIS315
 * Final Project
 * Jeff H. Sanford
 *
 * AccessPoint Class
 */

#include <iostream>
#include "Utility.h"
#include "AccessPoint.h"

using namespace std;

/**
 * Default constructor
 *
 * @param num Access point number
 */
AccessPoint::AccessPoint(int num) {
	number = num;
	on = false;
	month = "N/A";
}

/**
 * Default destructor.
 *
 * @destructor
 */
AccessPoint::~AccessPoint() {};

/**
 * Prints information about the access point.
 */
void AccessPoint::information(void) {
	// Combination of private variables and ternary
	// operator to output the status.
	cout << "      [Access Point " << intToString(number);
	cout << "] : " << ((on == true) ? "On" : "Off");
	cout << " : On as of " << month << endl << endl;
};

/**
 * Returns the access point number
 *
 * @return Integer representation of the access point number
 */
int AccessPoint::getNumber(void) {
	return number;
};

/**
 * Gets the month the unit was turned on.
 *
 * @return String representation of the month
 */
string AccessPoint::getDate(void) {
	return month;
};

/**
 * Sets the month the unit was turned on.
 *
 * @param m String representation of the month
 */
void AccessPoint::setDate(string m) {
	month = m;
};

/**
 * Boolean indicator of access point power status.
 *
 * @return Boolean flag indicating if unit is on or off
 */
bool AccessPoint::isOn(void) {
	return on;
};

/**
 * Sets the access point to 'on' [true]
 */
void AccessPoint::togglePower(void) {
	if (on == true) {
		on = false;
	}
	else {
		on = true;
	}
};
