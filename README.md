umuc-cmis315
============

Course work for UMUC CMIS315

### Homework 1
Write a program that inputs 5 numbers and output the average of the 5 numbers and their product; keep in mind that the result is a floating point number.

### Homework 2
Use functional decomposition to write a C++ program that asks the user to enter his or her weight and the name of a planet. The program then outputs how much the user would weigh on that planet. The following table gives the factor by which the weight must be multiplied for each planet. The program should output an error message if the user doesn't type a correct planet name. The prompt and the error message should make it clear to the user how a planet name must be entered. Be sure to use proper formatting and appropriate comments in your code. The output should be labeled clearly and formatted neatly.

Mercury 0.4155

Venus 0.8975

Earth 1.0

Moon 0.166

Mars 0.3507

Jupiter 2.5374

Saturn 1.0677

Uranus 0.8947

Neptune 1.1794

Pluto 0.0899

### Homework 3
Write a program that takes a letter as input and outputs the corresponding word in the International Civil Aviation Organization Alphabet. Extend the program so that it inputs a string and outputs the series of ICAO words that would be used to spell it out. For example:

```Enter string: program```
```Phonetic version is: Papa Romeo Oscar Golf Romeo Alpha Mike```

Write the program so that it determines the word corresponding to a specified letter using a Switch statement instead of an If structure.

### Homework 4
A software company that develops games has just hired you! Before working on the next version of Medieval Menace they have given you the task of implementing the tictac-toe game in C++. Tic-tac-toe consists of a 3 × 3 game board of squares where each square is either empty, has an X marker, or has a O marker. Two players represented by an X or an O play the game. The objective is for one player to get three Xs or three Os in a row first. Design, implement, and test classes that represent a tic-tac-toe game board and X and O markers. Your classes should provide suitable observer and mutator methods for modifying the game board and displaying the state of the game. Use your classes to create a game that prompts for player X and player O to place markers at specified locations on the game board. After each move your program should display the current game board to the console. Your program should also check after each move if there is a winning configuration of the game board. If so, the game should complete indicating which player won.

### Project 1
Computing the fine for a speeding ticket

Students will write an application to calculate speeding ticket fines for any number infractions. For each ticket, the input to this program will be the following (1) actual speed, (2) speed limit, (3) whether the offense occurred in a work zone, in a residential district, or not and (4) the court fees. The court fees are the same through the run, it is asked to the user only once. The output should show the total amount for the ticket. Once one total fine has been computed, the user should be given the choice of processing another ticket or quit.

```
Speeding
Fine: $5 per mile over speed limit  plus Court Fees

Speeding Highway Work Zone
Fine: $6 per mile over speed limit plus Court Fees

Speeding in a Residential District
Fine: $7 per mile over speed limit plus $200 plus Court Fees


Here is a typical session for this program:
Enter court fees: 62
Enter the type of speeding offense (1 for regular, 2 for highway, 3 for residential): 1
Enter the speed limit: 25
Enter the vehicle speed: 35
The total fine is $112

Enter 1 to enter another ticket or 0 to quit this fine calculator: 1

Enter the type of speeding offense (1 for regular, 2 for highway, 3 for residential): 3
Enter the speed limit: 55
Enter the vehicle speed: 65
The total fine is $332

Enter 1 to enter another ticket or 0 to quit this fine calculator: 0
Good bye.
```

The program needs to be structured using a class named FineCalculator that is in charge of computing the fine. The class declaration follows:

```cpp
class FineCalculator {

    public:

        FineCalculator(int courtFees);
        int getFine(int zone, int speedLimit, int actualSpeed) const;

    private:

        int _courtFees;

};
```

The getFine member function must not do any input or output, the only thing it does is computing the fine corresponding to the different parameters.

### Project 2
You are taking a geology class, and the professor wants you to write a program to help students learn the periods of geologic time. The program should let the user enter a range of prehistoric dates (in millions of years), and then output the periods that are included in that range. Each time this output is done, the user is asked if he or she wants to continue. The goal of the exercise is for the student to try to figure out when each period began, so that he or she can make a chart of geologic time.

Within the program, represent the periods with an enumeration type made up of their names. You will probably want to create a function that determines the period corresponding to a date, and another function that returns the string corresponding to each identifier in the enumeration. Then you can use a For loop to output the series of periods in the range. The periods of geologic time are given here:

Period Name

Starting Date (millions of years)

Neogene 23

Paleogene 65

Cretaceous 136

Jurassic 192

Triassic 225

Permian 280

Carboniferous 345

Devonian 395

Silurian 435

Ordovician 500

Cambrian 570

Precambrian 4500 or earlier

### Final Project
Imagine you are working for an in-house software team for a company that wants to monitor network access points in a building. Each building has a specified number of floors, a certain number of rooms per floor, and some number of network access points in a room. Each network access point is labeled with its state as being on or off and if it is on it has the month it was turned on. Design, implement, and test classes that represent buildings, floors, and network access points. Your classes should provide suitable observer methods that allow you to determine how many floors are in a building, how many rooms are on a floor, how many access points are in a room, and if an access point is on or off and which month it was turned on. You should also provide mutator methods that allow you to turn a network access point on or off and to set the month if it is turned on. You should use composition as a key strategy in designing these classes—thus, a building should contain floors, floors should contain rooms, and rooms should contain network access points. Your program should allow a user to add additional floors, rooms, and access points as well as turn access points on and off. Your program should also report errors using exceptions if a room, floor, or access point is chosen that does not exist.
