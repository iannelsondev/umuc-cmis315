/**
 * Ian Nelson
 * CMIS315
 * Final Project
 * Jeff H. Sanford
 *
 * Room Class
 */

#include <iostream>
#include <stdexcept>
#include "Utility.h"
#include "Room.h"

using namespace std;

/**
 * Default constructor
 *
 * @constructor
 * @param num Number of the room
 */
Room::Room(int num) {
	number = num;
	accessPointNumber = 1;
};

/**
 * Default destructor
 *
 * @destructor
 */
Room::~Room() {};

/**
 * Prints information about the room in a nested layout.
 */
void Room::information(void) {
	cout << "    Room " << intToString(number) << " Information" << endl;
	cout << "    ----------------------" << endl;
    cout << "    Room -> " << intToString(aps.size()) << " access points" << endl << endl;

    // Move through each of the rooms and print its information.
    for(vector<AccessPoint>::iterator ap_it = aps.begin(); ap_it != aps.end(); ++ap_it) {
    	ap_it->information();
    }
};

/**
 * Returns the room number
 *
 * @return The room number
 */
int Room::getNumber(void) {
	return number;
};

/**
 * Adds an access point to the room.
 */
void Room::addAccessPoint(void) {
	// Create a new access point with a one-up ID and add to the vector.
	AccessPoint *ap = new AccessPoint(accessPointNumber);
	aps.push_back(*ap);
	// Log the message.
	cout << "Created access point number " << intToString(accessPointNumber) << endl << endl;
	// Increment the IDs.
	accessPointNumber++;
};

/**
 * Removes an access point from the room.
 *
 * @param number Number of the access point.
 */
void Room::removeAccessPoint(int number) {
	// Flag to signify if it was found.
    bool found = false;

    // Create an iterator at the start of the vector.
    vector<AccessPoint>::iterator it = aps.begin();

    // While we haven't reached the end...
	while(it != aps.end()) {
		// Did we find it?
    	if (it->getNumber() == number) {
    		// Log, remove the object and set flag.
    		cout << "Removed access point number " << intToString(number) << "." << endl << endl;
    		aps.erase(it);
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
		throw invalid_argument("Unable to remove access point " + intToString(number));
	}
};

/**
 * Finds a pointer to an access point object.
 *
 * @param number Number of the access point
 * @return       Pointer to a access point object.
 */
AccessPoint* Room::findAccessPoint(int number) {
	// Flag to signify if it was found.
	bool found = false;

	// Create a reference pointer.
	AccessPoint *ap;

	// Iterate through the vector.
	for(vector<AccessPoint>::iterator it = aps.begin(); it != aps.end(); ++it) {
		// Did we find it?
		if (it->getNumber() == number) {
			// Flag and dereference the object.
			found = true;
			ap = &(*it);
		}
	}

	// We didn't find it anywhere.
	if (found == false) {
		// Throw an exception.
		throw invalid_argument("Unable to find access point " + intToString(number));
	}

	// Return the object's pointer.
	return ap;
};
