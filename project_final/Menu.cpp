/**
 * Ian Nelson
 * CMIS315
 * Final Project
 * Jeff H. Sanford
 *
 * Menu Class
 */

#include <iostream>
#include <stdexcept>
#include "Menu.h"
#include "Building.h"

using namespace std;

/**
 * Default constructor
 *
 * @constructor
 */
Menu::Menu() {
	repeat = true;
	building = new Building();
};

/**
 * Default destructor
 *
 * @destructor
 */
Menu::~Menu() {};

/**
 * Relays repeating status
 *
 * @return Boolean flag if repeating [true/false]
 */
bool Menu::isRepeating(void) {
	return repeat;
};

/**
 * Prints the main menu and does input validation
 *
 * @return Integer choice from the menu
 */
int Menu::main(void) {
	int choice = -1;
	while (choice < 0) {
		cout << "Network Access Port Monitoring" << endl;
		cout << "------------------------------" << endl;
		cout << "1 - Display building information" << endl;
		cout << "2 - Add a floor" << endl;
		cout << "3 - Remove a floor" << endl;
		cout << "4 - Add a room" << endl;
		cout << "5 - Remove a room" << endl;
		cout << "6 - Add a network access point" << endl;
		cout << "7 - Remove a network access point" << endl;
		cout << "8 - Toggle power status for an access point" << endl;
		cout << "9 - Change date for access point" << endl;
		cout << "0 - Quit" << endl << endl;
		cout << "Choice: ";

		cin >> choice;
		// If input was good and numerically correct...
		if (cin.good() && choice >= 0 && choice <= 9) {
			// Integer input is good, nothing to do.
		}
		else {
			// 'cin' bad bit set. Flush and reassign.
			cin.clear();
			string ignoreLine;
			getline(cin, ignoreLine);
			choice = -1;
            cout << endl;
		}
	}
	cout << endl;
	return choice;
};

/**
 * Processes the selection for the program. Uses non-branched
 * logic to execute sub-menus where appropriate.
 *
 * @param choice Integer menu choice
 */
void Menu::select(int choice) {
	int number;

	// Stop repeating.
	if (choice == 0) {
		repeat = false;
	}

	// Show info about the building.
	if (choice == 1) {
		building->information();
	}

	// Add a floor to the building.
	if (choice == 2) {
		building->addFloor();
	}

	// Remove a floor from the building.
	if (choice == 3) {
		// Validate input.
		number = removeFloor();
		try {
			// Remove the floor from the vector.
			building->removeFloor(number);
		}
		catch (invalid_argument &exception) {
			// Couldn't find the floor.
			cout << exception.what() << endl << endl;
		}
	}

	// Add a room.
	if (choice == 4) {
		// Ensure the floor number is legit.
		number = guaranteeFloor();
		// Find the floor, and then add a room to it.
		building->findFloor(number)->addRoom();
	}

	// Remove a room.
	if (choice == 5) {
		int floorNumber = guaranteeFloor();

		try {
			number = removeRoom();
			building->findFloor(floorNumber)->removeRoom(number);
		}
		catch (invalid_argument &exception) {
			cout << exception.what() << endl << endl;
		}
	}

	// Add an access point.
	if (choice == 6) {
		// Ensure the floor number is legit.
		int floorNumber = guaranteeFloor();

		// Ensure the room number is legit.
		int roomNumber = guaranteeRoom(floorNumber);

		// Find the floor, room, and then add an access point to it.
		building->findFloor(floorNumber)->findRoom(roomNumber)->addAccessPoint();
	}

	// Remove an access point.
	if (choice == 7) {
		int floorNumber = guaranteeFloor();
		int roomNumber = guaranteeRoom(floorNumber);

		try {
			number = removeAccessPoint();
			building->findFloor(floorNumber)->findRoom(roomNumber)->removeAccessPoint(number);
		}
		catch (invalid_argument &exception) {
			cout << exception.what() << endl << endl;
		}
	}

	// Toggle power status for an access point.
	if (choice == 8) {
		int floorNumber = guaranteeFloor();
		int roomNumber = guaranteeRoom(floorNumber);

		try {
			number = toggleAccessPoint();
			building->findFloor(floorNumber)->findRoom(roomNumber)->findAccessPoint(number)->togglePower();
		}
		catch (invalid_argument &exception) {
			cout << exception.what() << endl << endl;
		}
	}

	// Change date for an access point.
	if (choice == 9) {
		int floorNumber = guaranteeFloor();
		int roomNumber = guaranteeRoom(floorNumber);

		try {
			number = dateAccessPoint();
			string month = selectMonth();
			building->findFloor(floorNumber)->findRoom(roomNumber)->findAccessPoint(number)->setDate(month);
		}
		catch (invalid_argument &exception) {
			cout << exception.what() << endl << endl;
		}
	}
};

/**
 * Menu option to remove a floor
 *
 * @return Integer representation of floor number
 */
int Menu::removeFloor(void) {
	int number = -1;
	while (number < 0) {
		cout << "What floor number to remove? ";
		cin >> number;
		// If input was good and numerically correct...
		if (cin.good() && number >= 1) {
			// Integer input is good, nothing to do.
		}
		else {
			// 'cin' bad bit set. Flush and reassign.
			cin.clear();
			string ignoreLine;
			getline(cin, ignoreLine);
			number = -1;
		}
	}
	return number;
};

/**
 * Menu option to remove a room
 *
 * @return Integer representation of a room number
 */
int Menu::removeRoom(void) {
	int number = -1;
	while (number < 0) {
		cout << "What room number to remove? ";
		cin >> number;
		// If input was good and numerically correct...
		if (cin.good() && number >= 1) {
			// Integer input is good, nothing to do.
		}
		else {
			// 'cin' bad bit set. Flush and reassign.
			cin.clear();
			string ignoreLine;
			getline(cin, ignoreLine);
			number = -1;
		}
	}
	return number;
};

/**
 * Menu option to remove an access point
 *
 * @return Integer representation of an access point
 */
int Menu::removeAccessPoint(void) {
	int number = -1;
	while (number < 0) {
		cout << "What access point number to remove? ";
		cin >> number;
		// If input was good and numerically correct...
		if (cin.good() && number >= 1) {
			// Integer input is good, nothing to do.
		}
		else {
			// 'cin' bad bit set. Flush and reassign.
			cin.clear();
			string ignoreLine;
			getline(cin, ignoreLine);
			number = -1;
		}
	}
	return number;
};

/**
 * Menu option to toggle an access point's power
 *
 * @return Integer representation of an access point
 */
int Menu::toggleAccessPoint(void) {
	int number = -1;
	while (number < 0) {
		cout << "What access point number to toggle? ";
		cin >> number;
		// If input was good and numerically correct...
		if (cin.good() && number >= 1) {
			// Integer input is good, nothing to do.
		}
		else {
			// 'cin' bad bit set. Flush and reassign.
			cin.clear();
			string ignoreLine;
			getline(cin, ignoreLine);
			number = -1;
		}
	}
	return number;
};

/**
 * Menu option to date an access point
 *
 * @return Integer representation of an access point
 */
int Menu::dateAccessPoint(void) {
	int number = -1;
	while (number < 0) {
		cout << "What access point number to date change? ";
		cin >> number;
		// If input was good and numerically correct...
		if (cin.good() && number >= 1) {
			// Integer input is good, nothing to do.
		}
		else {
			// 'cin' bad bit set. Flush and reassign.
			cin.clear();
			string ignoreLine;
			getline(cin, ignoreLine);
			number = -1;
		}
	}
	return number;
};

/**
 * Selects and validates a floor for subordinate (room).
 * Does normal validation plus exception handling if the
 * floor does not exist.
 *
 * @return Integer representation of a floor number.
 */
int Menu::guaranteeFloor(void) {
	int floor = -1;

	// Need to validate the floor first...
	while (floor < 0) {
		cout << "What floor is the room on? ";
		cin >> floor;
		// If input was good and numerically correct...
		if (cin.good() && floor >= 1) {
			// Integer input is good, nothing to do.
		}
		else {
			// 'cin' bad bit set. Flush and reassign.
			cin.clear();
			string ignoreLine;
			getline(cin, ignoreLine);
			floor = -1;
		}

		// It's validated, but does it exist?
		try {
			building->findFloor(floor);
		}
		catch (invalid_argument &exception) {
			cout << exception.what() << endl;
			floor = -1;
		}
	}
	cout << endl;
	return floor;
};

/**
 * Selects and validates a floor for subordinate (room).
 * Does normal validation plus exception handling if the
 * floor does not exist.
 *
 * @param  floor Floor object the room is attached to
 * @return       Integer representation of a floor number
 */
int Menu::guaranteeRoom(int floorNumber) {
	int room = -1;

	// Need to validate the floor first...
	while (room < 0) {
		cout << "What room is the access point in? ";
		cin >> room;
		// If input was good and numerically correct...
		if (cin.good() && room >= 1) {
			// Integer input is good, nothing to do.
		}
		else {
			// 'cin' bad bit set. Flush and reassign.
			cin.clear();
			string ignoreLine;
			getline(cin, ignoreLine);
			room = -1;
		}

		// It's validated, but does it exist?
		try {
			building->findFloor(floorNumber)->findRoom(room);
		}
		catch (invalid_argument &exception) {
			cout << exception.what() << endl;
			room = -1;
		}
	}
	cout << endl;
	return room;
};

/**
 * Selects a month for the user to change the date of
 * an access point in a room.
 *
 * @return String representation of a month.
 */
string Menu::selectMonth(void) {
	int month = -1;
	string monthTextual;

	// Give user month options.
	cout << endl;
	while (month < 0) {
		cout << "1  - January" << endl;
		cout << "2  - February" << endl;
		cout << "3  - March" << endl;
		cout << "4  - April" << endl;
		cout << "5  - May" << endl;
		cout << "6  - June" << endl;
		cout << "7  - July" << endl;
		cout << "8  - August" << endl;
		cout << "9  - September" << endl;
		cout << "10 - October" << endl;
		cout << "11 - November" << endl;
		cout << "12 - December" << endl << endl;
		cout << "Month: ";

		cin >> month;
		// If input was good and numerically correct...
		if (cin.good() && month > 0 && month <= 12) {
			// Integer input is good, nothing to do.
		}
		else {
			// 'cin' bad bit set. Flush and reassign.
			cin.clear();
			string ignoreLine;
			getline(cin, ignoreLine);
			month = -1;
		}
	}

	// Branching logic to find the string representation.
	switch (month) {
		case 1:
			monthTextual = "January"; break;
		case 2:
			monthTextual = "February"; break;
		case 3:
			monthTextual = "March"; break;
		case 4:
			monthTextual = "April"; break;
		case 5:
			monthTextual = "May"; break;
		case 6:
			monthTextual = "June"; break;
		case 7:
			monthTextual = "July"; break;
		case 8:
			monthTextual = "August"; break;
		case 9:
			monthTextual = "September"; break;
		case 10:
			monthTextual = "October"; break;
		case 11:
			monthTextual = "November"; break;
		case 12:
			monthTextual = "December"; break;
	}
	// Space output.
	cout << endl;

	// Return the month.
	return monthTextual;
};
