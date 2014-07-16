/**
 * Ian Nelson
 * CMIS315
 * Discussion 7
 * Jeff H. Sanford
 */

#include <iostream>

// Uses standard namespace.
using namespace std;

/**
 * Animal class with base traits.
 *
 */
class Animal {
   public:
      Animal( string &nme );
   protected:
      string name;
};

/**
 * Constructor to set the name.
 *
 * @constructor
 */
Animal::Animal(string &nme) : name(nme) {};

/**
 * Mammal class.
 *
 * Inherits from the 'Animal' class.
 */
class Mammal : public Animal {
    public:
        Mammal(string &nme);
        double getBloodTemperature(void);
        string getName();
    private:
        static double const bloodTemperature = 98.6;
};

/**
 * Constructor to set the name from the superclass
 * and to set the blood temperature to 'warm'.
 *
 * @constructor
 */
Mammal::Mammal(string &nme) : Animal (nme) {};

/**
 * Method to return blood temperature.
 *
 * @return  Mammal's blood temperature
 */
double Mammal::getBloodTemperature(void) {
    return bloodTemperature;
};

/**
 * Method to return the inherited name
 * from the protected name variable of the
 * 'Animal' class.
 *
 * @return  Name of the animal.
 */
string Mammal::getName(void) {
    return name;
};

/**
 * Llama class.
 *
 * Inherits from Mammal, and inherits
 * Animal traits as the base class.
 */
class Llama : public Mammal {
    public:
        Llama(string &nme);
        bool hasCrazyHair();
    private:
        static bool const crazyHair = true;
};

/**
 * Constructor to set the name from the superclass
 * (in this case, the base class), and sets crazy
 * hair to true.
 *
 * @constructor
 */
Llama::Llama(string &nme) : Mammal (nme) {};

/**
 * Returns if the llama has crazy hair.
 *
 * @return Boolean state of having crazy hair.
 */
bool Llama::hasCrazyHair(void) {
    return crazyHair;
};

/**
 * Main execution function.
 *
 * @return Error code.
 */
int main () {
    // Set the animal names.
    string animalName = "John";
    string mammalName = "Suzie";
    string llamaName = "Bill";

    // Create unique instances of each class.
    Animal *animal = new Animal(animalName);
    Mammal *mammal = new Mammal(mammalName);
    Llama *crazyAngryLlama = new Llama(llamaName);

    // Show unique traits for Animal. Not much.
    cout << "So we have a new animal. We don't know its name, because there's no way to find it." << endl;
    cout << "That's about all we know about it." << endl << endl;

    // Show unique traits for Mammal class. Name + bloodTemperature.
    cout << "Here we go. Here's a new mammal. It's name is " << mammal->getName() << endl;
    cout << "Since the name is protected, we can access it from this subclass." << endl;
    cout << "Additionally, we know it has a blood temperature of " << mammal->getBloodTemperature() << endl << endl;

    // Show unique traits for Llama. This thing is crazy! Has all the traits!
    cout << "The llama " << crazyAngryLlama->getName() << " is crazy." << endl;
    cout << "He's definitely a mammal, so his blood is " << crazyAngryLlama->getBloodTemperature() << endl;
    cout << "Most importantly, does he have crazy hair? ";
    (crazyAngryLlama->hasCrazyHair() == 1) ? cout << "True!" : cout << "False";
    cout << endl << "Obviously, crazy hair is specific to a Llama, ";
    cout << "but it inherits animal and mammal traits." << endl;

    // Exit cleanly.
    return 0;
};