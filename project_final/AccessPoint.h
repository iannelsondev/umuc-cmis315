/**
 * Ian Nelson
 * CMIS315
 * Final Project
 * Jeff H. Sanford
 *
 * AccessPoint Class
 */

#ifndef ACCESSPOINT_H_
#define ACCESSPOINT_H_

#include <string>
#include "Utility.h"

/**
 * AccessPoint class
 *
 * @class
 */
class AccessPoint: public Utility {
private:
	bool on;
	int number;
	std::string month;
public:
	AccessPoint(int);
	~AccessPoint();
	void information(void);
	int getNumber(void);
	std::string getDate(void);
	void setDate(std::string);
	bool isOn(void);
	void togglePower(void);
};

#endif /* ACCESSPOINT_H_ */
