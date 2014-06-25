#include <iostream>

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
    int n = 5;     // 5 elements in the array.
    int a[ n ];    // n is a variable of type int
    std::cout << "1 represents even, 0 represents odd." << std::endl;

    // Loop through the array elements.
    for (int i = 0; i < n; i++) {
        int even;
        (i % 2 == 0) ? even = 1 : even = 0; // ternary operator to establish even-ness.
        a[i] = even; // Assign the even value.

        // Print the output.
        std::cout << "index " << i << " : value " << a[i] << std::endl;
    }
};