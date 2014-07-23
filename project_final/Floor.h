/**
 * Ian Nelson
 * CMIS315
 * Final Project
 * Jeff H. Sanford
 *
 * Floor Class
 */

#ifndef FLOOR_H_
#define FLOOR_H_

#include <vector>
#include "Utility.h"
#include "Room.h"

/**
 * Class to represent the floor
 *
 * @class
 */
class Floor: public Utility {
private:
	int number;
	int roomNumber;
	std::vector<Room> rooms;
public:
	Floor(int);
	~Floor();
	void information(void);
	int getNumber(void);
	void addRoom(void);
	void removeRoom(int number);
	Room* findRoom(int number);
};

#endif /* FLOOR_H_ */
