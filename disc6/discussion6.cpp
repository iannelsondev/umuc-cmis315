#include <iostream>

using namespace std;

/**
 * Elevator class.
 */
class Elevator {
    // Private members and methods.
    private:
        int floor;
    // Public members and methods.
    public:
        Elevator();
        Elevator(int);
        ~Elevator();
        void call(int);
        int getFloor();
        void send(int);
};

/**
 * Default constructor.
 *
 * @constructor
 */
Elevator::Elevator() {
    // Assign the floor at the bottom.
    floor = 1;
    cout << "Elevator was created" << endl;
};

/**
 * Overridden constructor, sets start floor.
 */
Elevator::Elevator(int startFloor) {
    floor = startFloor;
    cout << "Elevator was created at floor " << floor << endl;
};

/**
 * Default destructor.
 *
 * @destructor
 */
Elevator::~Elevator() {
    // Nothing to destroy.
    cout << "Elevator was destroyed" << endl;
};

/**
 * Calls the elevator to your floor.
 *
 */
void Elevator::call(int toFloor) {
    // Tell user elevator arrived.
    cout << "Elevator is at your floor (" << toFloor << ")" << endl;

    // Set floor.
    floor = toFloor;
};

/**
 * Returns the current floor of the elevator.
 *
 * @return Current floor of the elevator
 */
int Elevator::getFloor() {
    return floor;
};

/**
 * Sends the elevator to a floor.
 *
 * @param toFloor What floor to be sent to.
 */
void Elevator::send(int toFloor) {
    floor = toFloor;
    cout << "Elevator is at floor " << floor << endl;
};

/**
 * Main execution point.
 *
 * @return Exit code
 */
int main () {
    // Set the user's floor.
    int floor = 1;

    // Create two new elevators, one with defined floor.
    Elevator *e1 = new Elevator();
    Elevator *e2 = new Elevator(3);

    // Output floors.
    cout << "Elevator 1 is on floor " << e1->getFloor() << endl;
    cout << "Elevator 2 is on floor " << e2->getFloor() << endl;

    // Call the second elevator.
    cout << "Calling Elevator 2 to floor " << floor << "..." << endl;
    e2->call(floor);

    // Send the first elevator.
    cout << "Sending Elevator 1 to 14..." << endl;
    e1->send(14);

    // Destroy the elevators.
    cout << "Destroying Elevator 1..." << endl;
    delete e1;
    cout << "Destroying Elevator 2..." << endl;
    delete e2;

    // Exit cleanly.
    return 0;
};