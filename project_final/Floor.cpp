/**
 * Ian Nelson
 * CMIS315
 * Final Project
 * Jeff H. Sanford
 *
 * Floor Class
 */

#include <iostream>
#include <vector>
#include <stdexcept>
#include "Utility.h"
#include "Floor.h"
#include "Room.h"

using namespace std;

/**
 * Default constructor
 *
 * @constructor
 * @param num Number of the floor
 */
Floor::Floor(int num) {
	number = num;
	roomNumber = 1;
};

/**
 * Default destructor.
 *
 * @destructor
 */
Floor::~Floor() {};

/**
 * Prints information about the floor in a nested layout.
 */
void Floor::information(void) {
	cout << "  Floor " << intToString(number) << " Information" << endl;
	cout << "  ----------------------" << endl;
    cout << "  Floor -> " << intToString(rooms.size()) << " rooms" << endl << endl;

    // Move through each of the rooms and print its information.
    for(vector<Room>::iterator room_it = rooms.begin(); room_it != rooms.end(); ++room_it) {
    	room_it->information();
    }
};

/**
 * Returns the floor number
 *
 * @return The floor number
 */
int Floor::getNumber(void) {
	return number;
};

/**
 * Adds a room to the floor.
 */
void Floor::addRoom(void) {
	// Create a new room with a one-up ID and add to the vector.
	Room *r = new Room(roomNumber);
	rooms.push_back(*r);
	// Log the message.
	cout << "Created room number " << intToString(roomNumber) << endl << endl;
	// Increment the IDs.
	roomNumber++;
};

/**
 * Removes a room from the floor.
 *
 * @param number Number of the room.
 */
void Floor::removeRoom(int number) {
	// Flag to signify if it was found.
    bool found = false;

    // Create an iterator at the start of the vector.
    vector<Room>::iterator it = rooms.begin();

    // While we haven't reached the end...
	while(it != rooms.end()) {
		// Did we find it?
    	if (it->getNumber() == number) {
    		// Log, remove the object and set flag.
    		cout << "Removed room number " << intToString(number) << "." << endl << endl;
    		rooms.erase(it);
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
		throw invalid_argument("Unable to remove room " + intToString(number));
	}
};

/**
 * Finds a pointer to a room object.
 *
 * @param number Number of the room
 * @return       Pointer to a room object.
 */
Room* Floor::findRoom(int number) {
	// Flag to signify if it was found.
	bool found = false;

	// Create a reference pointer.
	Room *r;

	// Iterate through the vector.
	for(vector<Room>::iterator it = rooms.begin(); it != rooms.end(); ++it) {
		// Did we find it?
		if (it->getNumber() == number) {
			// Flag and dereference the object.
			found = true;
			r = &(*it);
		}
	}

	// We didn't find it anywhere.
	if (found == false) {
		// Throw an exception.
		throw invalid_argument("Unable to find room " + intToString(number));
	}

	// Return the object's pointer.
	return r;
};
