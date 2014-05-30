/**
 * Functional decomposition of calculating a user's
 * weight across a series of interstellar objects.
 *
 * Ian Nelson
 * CMIS315
 * Homework 2
 * Jeff H. Sanford
 */

// Class/Library includes.
#include <iostream>
#include <limits>

// Define std namespace for method access.
using namespace std;

// Assign constants for weight coeffecients.
const float MERCURY = 0.4155;
const float VENUS   = 0.8975;
const float EARTH   = 1.0;
const float MOON    = 0.166;
const float MARS    = 0.3507;
const float JUPITER = 2.5374;
const float SATURN  = 1.0677;
const float URANUS  = 0.8947;
const float NEPTUNE = 1.1794;
const float PLUTO   = 0.0899;

/**
 * Calculates the weight on Mercury
 *
 * @param  weight Weight of the user
 * @return        Weight plus gravational coeffecient
 */
float calculateMercuryWeight (float weight) {
    return weight * MERCURY;
};

/**
 * Calculates the weight on Venus 
 *
 * @param  weight Weight of the user
 * @return        Weight plus gravational coeffecient
 */
float calculateVenusWeight (float weight) {
    return weight * VENUS;
};

/**
 * Calculates the weight on Earth 
 *
 * @param  weight Weight of the user
 * @return        Weight plus gravational coeffecient
 */
float calculateEarthWeight (float weight) {
    return weight * EARTH;
};

/**
 * Calculates the weight on the Moon 
 *
 * @param  weight Weight of the user
 * @return        Weight plus gravational coeffecient
 */
float calculateMoonWeight (float weight) {
    return weight * MOON;
};

/**
 * Calculates the weight on Mars 
 *
 * @param  weight Weight of the user
 * @return        Weight plus gravational coeffecient
 */
float calculateMarsWeight (float weight) {
    return weight * MOON;
};

/**
 * Calculates the weight on Jupiter 
 *
 * @param  weight Weight of the user
 * @return        Weight plus gravational coeffecient
 */
float calculateJupiterWeight (float weight) {
    return weight * JUPITER;
};

/**
 * Calculates the weight on Saturn
 *
 * @param  weight Weight of the user
 * @return        Weight plus gravational coeffecient
 */
float calculateSaturnWeight (float weight) {
    return weight * SATURN;
};

/**
 * Calculates the weight on Uranus 
 *
 * @param  weight Weight of the user
 * @return        Weight plus gravational coeffecient
 */
float calculateUranusWeight (float weight) {
    return weight * URANUS;
};

/**
 * Calculates the weight on Neptune 
 *
 * @param  weight Weight of the user
 * @return        Weight plus gravational coeffecient
 */
float calculateNeptuneWeight (float weight) {
    return weight * NEPTUNE;
};

/**
 * Calculates the weight on Pluto 
 *
 * @param  weight Weight of the user
 * @return        Weight plus gravational coeffecient
 */
float calculatePlutoWeight (float weight) {
    return weight * PLUTO;
};

/**
 * Displays a menu of choices to the user for planets to calculate weight
 *
 * @return Planet selection from menu
 */
int planetaryMenu () {
    // Declare selection variable.
    int planet;

    // Print the menu.
    cout << "Planetary Choices" << endl;
    cout << "-----------------" << endl;;
    cout << "1  - Mercury"      << endl;
    cout << "2  - Venus"        << endl;
    cout << "3  - Earth"        << endl;
    cout << "4  - Moon"         << endl;
    cout << "5  - Mars"         << endl;
    cout << "6  - Jupiter"       << endl;
    cout << "7  - Saturn"       << endl;
    cout << "8  - Uranus"       << endl;
    cout << "9  - Neptune"      << endl;
    cout << "10 - Pluto"        << endl << endl;

    // Ask user for the planet and space the response.
    cout << "What planet are you going to? ";
    cin >> planet;

    if (cin.good()) {
        // Integer input is good, nothing to do.
    }
    else {
        // 'cin' bad bit set. Flush and reassign new value (0).
        cin.clear();
        string ignoreLine;
        getline(cin, ignoreLine);
        planet = 0;
    }

    // Space the output.
    cout << endl;

    // Return the error-checked selection.
    return planet;
};

/**
 * Inputs the user's weight on Earth
 *
 * @return User's weight
 */
float inputUserWeight () {
    // Declare variables
    float weight;

    // Input user's weight.
    cout << "What is your current weight? ";
    cin >> weight;
    
    if (cin.good()) {
        // Integer input is good, nothing to do.
    }
    else {
        // 'cin' bad bit set. Flush and reassign new value (0).
        cin.clear();
        string ignoreLine;
        getline(cin, ignoreLine);
        weight = 0;
    }
   
    // Return the error-checked weight.
    return weight;
};

/**
 * Start point of the program
 *
 * @return Exit code
 */
int main () {
    // Declare variables.
    float userWeight = 0, calculatedWeight;
    int planet;

    // Get the user's weight.
    while (userWeight <= 0) {
        userWeight = inputUserWeight();
    }

    // Space after proper input.
    cout << endl;
    
    // Return the user's planet selection from the menu.
    int selection = 0;

    // While a bad selection is made...
    while ((selection < 1) || (selection > 10)) { 
        // Get the user's planetary selection.
        selection = planetaryMenu();
        
        // Check the user's response to planet.
        switch (selection) {
            case 1:
                // Calculate weight on Mercury.
                cout << "Your weight on Mercury is ";
                cout << calculateMercuryWeight(userWeight) << endl;
                break;
            case 2:
                // Calculate weight on Venus.
                cout << "Your weight on Venus is ";
                cout << calculateVenusWeight(userWeight) << endl;
                break;
            case 3:
                // Calculate weight on Earth.
                cout << "Your weight on Earth is ";
                cout << calculateEarthWeight(userWeight) << endl;
                break;
            case 4:
                // Calculate weight on the Moon.
                cout << "Your weight on the Moon is ";
                cout << calculateMoonWeight(userWeight) << endl;
                break;
            case 5:
                // Calculate weight on Mars.
                cout << "Your weight on Mars is ";
                cout << calculateMarsWeight(userWeight) << endl;
                break;
            case 6:
                // Calculate weight on Jupiter.
                cout << "Your weight on Jupiter is ";
                cout << calculateJupiterWeight(userWeight) << endl;
                break;
            case 7:
                // Calculate weight on Saturn.
                cout << "Your weight on Saturn is ";
                cout << calculateSaturnWeight(userWeight) << endl;
                break;
            case 8:
                // Calculate weight on Uranus.
                cout << "Your weight on Uranus is ";
                cout << calculateUranusWeight(userWeight) << endl;
                break;
            case 9:
                // Calculate weight on Neptune.
                cout << "Your weight on Neptune is ";
                cout << calculateNeptuneWeight(userWeight) << endl;
                break;
            case 10:
                // Calculate weight on Pluto.
                cout << "Your weight on Pluto is ";
                cout << calculatePlutoWeight(userWeight) << endl;
                break;
            default:
                // By default, user did not select a correct planet. Let user know.
                cout << "You did not select a correct planet from the menu. Please select the number from the menu." << endl << endl;
        }
    }
};
