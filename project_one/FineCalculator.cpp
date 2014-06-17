/**
 * Fine calculator class for project 1.
 *
 * Ian Nelson
 * CMIS315
 * Project 1
 * Jeff H. Sanford
 */

// Class/Library Includes.
#include "FineCalculator.h"

/**
 * Constructor with override for court fees
 */
FineCalculator::FineCalculator (int courtFees) {
	_courtFees = courtFees;
};

/**
 * Gets the total fine based on zone, speed limit and traveling speed
 * 
 * @param  zone        Zone ticket was issued in
 * @param  speedLimit  Speed limit in which the ticket was issued
 * @param  actualSpeed Speed that person was traveling
 * @return             Total calculated fine
 */
int FineCalculator::getFine (int zone, int speedLimit, int actualSpeed) const {
	// Initialize the extra fine and fine multiplier.
	int extraFine = 0;
	int multiplier = 1;

	// Select the multiplier and extra fine from zone.
	switch (zone) {
		case 1:
			multiplier = 5;
			break;
		case 2:
			multiplier = 6;
			break;
		case 3:
			multiplier = 7;
			extraFine = 200;
		default:
			break;
	};

	// Calculate the difference in speed.
	int difference = actualSpeed - speedLimit;

	// Initial fine is calculated from the difference in speed
	// versus the zone fine multiplier.
	int fine = difference * multiplier;

	// Return the fine plus extra fines + court fees.
	return fine + extraFine + _courtFees;
};