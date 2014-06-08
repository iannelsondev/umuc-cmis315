#include <iostream>

using namespace std;

/**
 * Class to represent two different selection statements
 * in discussion #2.
 *
 * Ian Nelson
 * CMIS315
 * Discussion 2
 * Jeff H. Sanford
 */
class DiscussionTwo {
	public:
		DiscussionTwo();
		~DiscussionTwo();
		string findMonth(int);
		string determineTemperature(int);
};

/**
 * Default constructor.
 */
DiscussionTwo::DiscussionTwo() {};

/**
 * Default destructor.
 */
DiscussionTwo::~DiscussionTwo() {};

/**
 * Finds the string representation of a month.
 * 
 * @param  month  Number of the month
 * @return        String representation of the month
 */
string DiscussionTwo::findMonth (int month) {
	// Switches the month integer.
	switch (month) {
		case 1:
			return "January"; break;
		case 2:
			return "February"; break;
		case 3:
			return "March"; break;
		case 4:
			return "April"; break;
		case 5:
			return "May"; break;
		case 6:
			return "June"; break;
		case 7:
			return "July"; break;
		case 8:
			return "August"; break;
		case 9:
			return "September"; break;
		case 10:
			return "October"; break;
		case 11:
			return "November"; break;
		case 12:
			return "December"; break;
		// If nothing else matches, return unknown.
		default:
			return "Unknown"; break;
	}
};

/**
 * Determines the average seaonsal temperature based on month
 * 
 * @param  month  Number of the month
 * @return        Seasonal average temperature
 */
string DiscussionTwo::determineTemperature (int month) {
	// If the month is between January and March, or October and December...
	if ( (month <= 3 && month > 0) || (month >= 10 && month <= 12) ) {
		return "Cold";
	}
	// Otherwise...
	else {
		return "Warm";
	}
};

/**
 * Main function
 * 
 * @return Exit code
 */
int main () {
	// Instance of the class.
	DiscussionTwo disc;

	// For each month of the year...
	for (int i = 1; i <= 12; i++) {
		// Print the month's name.
		cout << "The month numbered " << i << " is " << disc.findMonth(i) << endl;

		// Print the seasonal average temperature.
		cout << "The temperature during the month is " << disc.determineTemperature(i) << endl << endl;
	}

	// Exit cleanly.
	return 0;
};