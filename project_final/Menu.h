/**
 * Ian Nelson
 * CMIS315
 * Final Project
 * Jeff H. Sanford
 *
 * Menu Class
 */

#ifndef MENU_H_
#define MENU_H_

#include "Building.h"

/**
 * Class to represent the menu
 *
 * @class
 */
class Menu {
private:
	bool repeat;
	Building *building;
public:
	Menu();
	~Menu();
	bool isRepeating(void);
	int main(void);
	void select(int);
	std::string selectMonth(void);
	int removeFloor(void);
	int removeRoom(void);
	int removeAccessPoint(void);
	int guaranteeFloor(void);
	int guaranteeRoom(int);
	int toggleAccessPoint(void);
	int dateAccessPoint(void);
};

#endif /* MENU_H_ */
