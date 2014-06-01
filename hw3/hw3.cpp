/**
 * Creates an instance of IcaoWordParser and parses user input
 *
 * Ian Nelson
 * CMIS315
 * Homework 3
 * Jeff H. Sanford
 */

// Class/Library includes
#include <iostream>
#include <string>
#include "IcaoWordParser.h"

// Define std namespace for method access.
using namespace std;

/**
 * Start point of the program
 *
 * @return Exit code
 */
int main () {
    // Initialize variables.
    string toParse;
    IcaoWordParser* parser;
    
    // Ask user for the phrase. Retrieve the whole line 'cause spaces.
    cout << "What phrase would you like to convert? ";
    getline(cin, toParse); cout << endl;

    // Create an instance of the class with the user-defined phrase.
    parser = new IcaoWordParser(toParse);

    // Parse the phrase.
    parser->parse();

    // Print the resulting conversion to ICAO words.
    cout << "Your parsed phrase is: " << parser->getParsed() << endl;

    // Exit cleanly.
    return 0;
}
