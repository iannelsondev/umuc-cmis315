// Class/library includes.
#include <iostream>

// Define std namespace for method access.
using namespace std;

/**
 * NumericProcessor
 *
 * Class that contains methods to produce a product and average
 *
 * Ian Nelson
 * CMIS315
 * Homework 1
 * Jeff H. Sanford
 */
class NumericProcessor {
    public:
        NumericProcessor();
        ~NumericProcessor();
        float product (float, float, float, float, float);
        float average (float, float, float, float, float);
};

/**
 * Class constructor
 */
NumericProcessor::NumericProcessor() {
    // No construction needed.
};

/**
 * Class destructor
 */
NumericProcessor::~NumericProcessor() {
    // No destruction needed.
};

/**
 * Returns the product of five floating point numbers.
 *
 * @param num1 First user-defined number
 * @param num2 First user-defined number
 * @param num3 First user-defined number
 * @param num4 First user-defined number
 * @param num5 First user-defined number
 * @return     Product of the five floating point numbers
 */
float NumericProcessor::product(float num1, float num2, float num3, float num4, float num5) {
    return ( num1 * num2 * num3 * num4 * num5 );
};

/**
 * Returns the average of five floating point numbers.
 *
 * @param num1 First user-defined number
 * @param num2 First user-defined number
 * @param num3 First user-defined number
 * @param num4 First user-defined number
 * @param num5 First user-defined number
 * @return     Average of the five floating point numbers
 */
float NumericProcessor::average(float num1, float num2, float num3, float num4, float num5) {
    return ( (num1 + num2 + num3 + num4 + num5) / 5 );
};

/**
 * Start point of the program
 * 
 * @return Exit code
 */
int main() {
    // Input variables.
    float num1, num2, num3, num4, num5, product, average;

    // Ask for user input with defined formatting.
    cout << "Enter a list of five numbers, separated by space: ";
    
    // Input the five floating point numbers.
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4; 
    cin >> num5;
  
    // Terminate the input line.
    cout << endl;

    // Create an instance of the numeric processing class.
    NumericProcessor np;

    // Calculate product.
    product = np.product(num1, num2, num3, num4, num5);

    // Calculate average.
    average = np.average(num1, num2, num3, num4, num5);

    // Give user feedback on product.
    std::cout << "The product of (" << num1 << "," << num2 << "," << num3 << "," << num4 << "," << num5 << ") is " << product << endl;

    // Give user feedback on average.
    std::cout << "The average of (" << num1 << "," << num2 << "," << num3 << "," << num4 << "," << num5 << ") is " << average << endl;

    // Exit cleanly.
    return 0;
};
