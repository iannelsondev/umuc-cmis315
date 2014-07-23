/**
 * Ian Nelson
 * CMIS315
 * Final Project
 * Jeff H. Sanford
 *
 * Building Class
 */

#include <iostream>
#include <vector>
#include <stdexcept>
#include "Utility.h"
#include "Building.h"
#include "Floor.h"

using namespace std;

/**
 * Default constructor
 *
 * @constructor
 */
Building::Building() {
	floorNumber = 1;
};

/**
 * Default destructor
 *
 * @destructor
 */
Building::~Building () {};

/**
 * Prints information about the building in a nested layout.
 */
void Building::information(void) {
    cout << "Building Information" << endl;
    cout << "--------------------" << endl;
    cout << "Building -> " << intToString(floors.size()) << " floors" << endl << endl;

    // Move through each of the floors and print its information.
    for(vector<Floor>::iterator floor_it = floors.begin(); floor_it != floors.end(); ++floor_it) {
    	floor_it->information();
    }
};

/**
 * Adds a floor to the building.
 */
void Building::addFloor(void) {
	// Create a new floor with a one-up ID and add to the vector.
	Floor *f = new Floor(floorNumber);
	floors.push_back(*f);
	// Log the message.
	cout << "Created floor number " << intToString(floorNumber) << endl << endl;
	// Increment the IDs.
	floorNumber++;
};

/**
 * Removes a floor from the building.
 *
 * @param number Number of the floor.
 */
void Building::removeFloor(int number) {
	// Flag to signify if it was found.
    bool found = false;

    // Create an iterator at the start of the vector.
    vector<Floor>::iterator it = floors.begin();

    // While we haven't reached the end...
	while(it != floors.end()) {
		// Did we find it?
    	if (it->getNumber() == number) {
    		// Log, remove the object and set flag.
    		cout << "Removed floor number " << intToString(number) << "." << endl << endl;
    		floors.erase(it);
    		found = true;
    	}
    	// Nope.
    	else {
    		// Increment the iterator.
    		++it;
    	}
    }
	// We didn't find it anywhere.
	if (found == false) {
		// Throw an exception.
		throw invalid_argument("Unable to remove floor " + intToString(number));
	}
};

/**
 * Finds a pointer to a floor object.
 *
 * @param number Number of the floor
 * @return       Pointer to a floor object.
 */
Floor* Building::findFloor(int number) {
	// Flag to signify if it was found.
	bool found = false;

	// Create a reference pointer.
	Floor *f;

	// Iterate through the vector.
	for(vector<Floor>::iterator it = floors.begin(); it != floors.end(); ++it) {
		// Did we find it?
		if (it->getNumber() == number) {
			// Flag and dereference the object.
			found = true;
			f = &(*it);
		}
	}

	// We didn't find it anywhere.
	if (found == false) {
		// Throw an exception.
		throw invalid_argument("Unable to find floor " + intToString(number));
	}

	// Return the object's pointer.
	return f;
};
