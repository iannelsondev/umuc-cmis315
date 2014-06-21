#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <istream>
#include <iterator>
#include <sstream>

using namespace std;

/**
 * Prints a string, tokenizes the string into words, and then
 * prints the evaluation of the string into ASCII values.
 * 
 * Ian Nelson
 * CMIS315
 * Discussion 3
 * Jeff H. Sanford
 * 
 * @return Exit code
 */
int main () {
	// Set the discussion text and print it.
	string discussionThreeText = "This is a test for discussion 3";
	cout << discussionThreeText << endl;

	// Create a stream from the discussion text.
	stringstream string_stream(discussionThreeText);

	// Define the iterator to move through the string stream and end.
	istream_iterator<string> it(string_stream);
	istream_iterator<string> end;

	// Place the delimited tokens into a vector
	vector<string> results(it, end);

	// Define the token iterator.
	vector<string>::const_iterator it_token;
	it_token = results.begin();

	// While the token is not at the end of the vector...
	while (it_token != results.end()) {

		// Derefence the token into a string.
		string token =  *it_token;

		// For each character in the token string...
		for (int i = 0; i < token.length(); i++) {
			
			// Print its ASCII value via casting.
			cout << (int)token[i] << " ";
		}

		// Print a large space to delineate the words.
		cout << "     ";

		// Iterate forward.
		it_token++;
	}

	// Terminate the line.
	cout << endl;

	// Exit cleanly.
	return 0;
};