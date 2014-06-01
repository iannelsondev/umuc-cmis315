// Single definition.
#ifndef ICAOWORDPARSER_H
#define ICAOWORDPARSER_H

// Class/Library includes.
#include <string>
#include <vector>

// Define std namespace for method access.
using namespace std;

/**
 * Class definition for IcaoWordParser class
 *
 * Ian Nelson
 * CMIS315
 * Homework 3
 * Jeff H. Sanford
 */
class IcaoWordParser {
    private:
        string unparsedString;
        string parsedString;
        vector<string> tokenize();
        vector<string> parseString();
        string assembleTokens(vector<string>);
    public:
        IcaoWordParser();
        IcaoWordParser(string);
        ~IcaoWordParser();
        void parse();
        string getUnparsed();
        string getParsed();
};

// Terminate definition.
#endif
