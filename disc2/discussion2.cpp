#include <iostream>

using namespace std;

class DiscussionTwo {
	public:
		DiscussionTwo();
		~DiscussionTwo();
		string findMonth(int);
		string determineTemperature(int);
};

DiscussionTwo::DiscussionTwo() {};

DiscussionTwo::~DiscussionTwo() {};

string DiscussionTwo::findMonth (int month) {
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
		default:
			return "Unknown"; break;
	}
};

string DiscussionTwo::determineTemperature (int month) {
	if ( (month <= 3 && month > 0) || (month >= 10 && month <= 12) ) {
		return "Cold";
	}
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
	DiscussionTwo disc;

	for (int i = 1; i <= 12; i++) {
		cout << "The month numbered " << i << " is " << disc.findMonth(i) << endl;
		cout << "The temperature during the month is " << disc.determineTemperature(i) << endl << endl;
	}

	return 0;
};