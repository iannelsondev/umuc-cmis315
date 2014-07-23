#include <sstream>
#include "Utility.h"

using namespace std;

string Utility::intToString(int num) {
	stringstream ss;
	ss << num;
    return ss.str();
}
