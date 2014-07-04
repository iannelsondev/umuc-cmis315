#include <iostream>

using namespace std;

/**
 * Simple growth function to represent a function call
 * with recursion for coeffecient
 *
 * Ian Nelson
 * CMIS315
 * Discussion 5
 * Jeff H. Sanford
 *
 * @return Exit code
 */

/**
 * Coeffecient-based growth function
 *
 * @param  value       Recursive value
 * @param  coeffecient Multiplicative coeffecient
 * @param  goal        Coeffecient growth goal
 * @return             Growth value at n step
 */
int growth (int value, int coeffecient, int goal) {
    // Did we meet the growth goal?
    if (coeffecient != goal) {
        // Grow.
        value = value + (value * coeffecient);
        // Iterate the growth coeffecient.
        coeffecient++;
        // Print the value.
        cout << "Value is " << value << endl;
        // Recursively move to the next growth.
        growth(value, coeffecient, goal);
    }
    // Yes we did. Return the value.
    else {
        return value;
    }
};

/**
 * Main execution path.
 *
 * @return Exit code
 */
int main () {
    // Print the final recursive growth.
    cout << "Final growth at coeffecient of 16 is " << growth(1, 1, 16) << endl;
    // Exit cleanly.
    return 0;
};