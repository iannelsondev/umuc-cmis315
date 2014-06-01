// Class/Library includes.
#include <string>
#include <vector>
#include <sstream>
#include <iterator>
#include "IcaoWordParser.h"

// Define std namespace for method access.
using namespace std;

/**
 * Class to generate ICAO translations of words
 *
 * Ian Nelson
 * CMIS315
 * Homework 3
 * Jeff H. Sanford
 */

/**
 * Default constructor
 */
IcaoWordParser::IcaoWordParser () {
    // Default empty string.
    unparsedString = "";
};

/**
 * Constructor override for defined string
 *
 * @param unparsed Unparsed string
 */
IcaoWordParser::IcaoWordParser (string unparsed) {
    unparsedString = unparsed;
};

/**
 * Default destructor
 */
IcaoWordParser::~IcaoWordParser () {
    // No pointers to clean up.
};

/**
 * Parses the user-defined string
 */
void IcaoWordParser::parse () {
    vector<string> tokens = tokenize();
    parsedString = assembleTokens(tokens);
};

/**
 * Parses a string object into a vector of ICAO word string tokens
 *
 * @return A vector of ICAO word string tokens
 */
vector<string> IcaoWordParser::tokenize() {
    // Create an empty vector of string types.
    vector<string> parsedTokens;

    // Iterate through the characters in the string.
    for (string::const_iterator i = unparsedString.begin(); i != unparsedString.end(); ++i) {
        // Convert each letter to uppercase.
        char letter = toupper(*i);
        // Select the ICAO word from each cooresponding letter.
        switch (letter) {
            case 'A':
                parsedTokens.push_back("ALPHA");
                break;
            case 'B':
                parsedTokens.push_back("BRAVO");
                break;
            case 'C':
                parsedTokens.push_back("CHARLIE");
                break;
            case 'D':
                parsedTokens.push_back("DELTA");
                break;
            case 'E':
                parsedTokens.push_back("ECHO");
                break;
            case 'F':
                parsedTokens.push_back("FOXTROT");
                break;
            case 'G':
                parsedTokens.push_back("GOLF");
                break;
            case 'H':
                parsedTokens.push_back("HOTEL");
                break;
            case 'I':
                parsedTokens.push_back("INDIA");
                break;
            case 'J':
                parsedTokens.push_back("JULIET");
                break;
            case 'K':
                parsedTokens.push_back("KILO");
                break;
            case 'L':
                parsedTokens.push_back("LIMA");
                break;
            case 'M':
                parsedTokens.push_back("MIKE");
                break;
            case 'N':
                parsedTokens.push_back("NOVEMBER");
                break;
            case 'O':
                parsedTokens.push_back("OSCAR");
                break;
            case 'P':
                parsedTokens.push_back("PAPA");
                break;
            case 'Q':
                parsedTokens.push_back("QUEBEC");
                break;
            case 'R':
                parsedTokens.push_back("ROMEO");
                break;
            case 'S':
                parsedTokens.push_back("SIERRA");
                break;
            case 'T':
                parsedTokens.push_back("TANGO");
                break;
            case 'U':
                parsedTokens.push_back("UNIFORM");
                break;
            case 'V':
                parsedTokens.push_back("VICTOR");
                break;
            case 'W':
                parsedTokens.push_back("WHISKEY");
                break;
            case 'X':
                parsedTokens.push_back("X-RAY");
                break;
            case 'Y':
                parsedTokens.push_back("YANKEE");
                break;
            case 'Z':
                parsedTokens.push_back("ZULU");
                break;
            case ' ':
                parsedTokens.push_back("_");
                break;
            default:
                parsedTokens.push_back("[BAD]");
                break;
        }
    }

    // Return a vector of string tokens.
    return parsedTokens;
};

/**
 * Assembles a string from a vector of string tokens
 *
 * @param tokens Vector of string tokens
 * @return       Concatenated string object
 */
string IcaoWordParser::assembleTokens (vector<string> tokens) {
    // Iterate through the vector of string tokens.
    const char* const delimiter = " ";
    ostringstream assembled;
    copy(tokens.begin(), tokens.end(), ostream_iterator<string>(assembled, delimiter));

    // Return the concatenated string;
    return assembled.str();
};

/**
 * Returns the unparsed version of the string
 *
 * @return The unparsed, user-defined string
 */
string IcaoWordParser::getUnparsed () {
    return unparsedString;
};

/**
 * Returns the parsed version of the string
 *
 * @return A parsed version with ICAO word translation
 */
string IcaoWordParser::getParsed () {
    return parsedString;
};
