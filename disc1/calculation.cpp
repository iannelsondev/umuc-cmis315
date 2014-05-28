// Class/library includes.
#include <iostream>

// Define std namespace for method access.
using namespace std;

/**
 * Main accessor function
 *
 * Function that provides a product of two integers.
 * 
 * Ian Nelson
 * CMIS315
 * Discussion 1
 * Jeff H. Sanford
 */
int main () {
    // Define two integers.
    int num1, num2;

    // Print request to user to input two integers.
    cout << "Enter two whole numbers to multiply, separated by space: ";

    // Input two integers.
    cin >> num1;
    cin >> num2;

    // Terminate the line.
    cout << endl;

    // Print the product of the two integers.
    cout << "The product of these numbers is " << (num1 * num2) << endl;

    // Exit cleanly
    return 0;
};
