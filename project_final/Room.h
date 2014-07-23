/**
 * Ian Nelson
 * CMIS315
 * Final Project
 * Jeff H. Sanford
 *
 * Room Class
 */

#ifndef ROOM_H_
#define ROOM_H_

#include <vector>
#include "Utility.h"
#include "AccessPoint.h"

class Room: public Utility {
private:
	int number;
	int accessPointNumber;
	std::vector<AccessPoint> aps;
public:
	Room(int);
	~Room();
	void information(void);
	int getNumber(void);
	void addAccessPoint(void);
	void removeAccessPoint(int number);
	AccessPoint* findAccessPoint(int number);
};

#endif /* ROOM_H_ */
