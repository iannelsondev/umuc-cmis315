/**
 * Ian Nelson
 * CMIS315
 * Final Project
 * Jeff H. Sanford
 *
 * Building Class
 */
#ifndef BUILDING_H_
#define BUILDING_H_

#include <vector>
#include "Utility.h"
#include "Floor.h"

/**
 * Class to represent the building
 *
 * @class
 */
class Building: public Utility {
private:
	int floorNumber;
	std::vector<Floor> floors;
public:
	Building();
	~Building();
	void information(void);
	void addFloor(void);
	void removeFloor(int);
	Floor* findFloor(int number);
};


#endif /* BUILDING_H_ */
