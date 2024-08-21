#ifndef _LASER_H
#define _LASER_H

#include "printer.h"

class Laser : public Printer {
	int availableToner;
public:
	Laser();
	Laser(int);

	int getAvailableToner();
	void printLaser();
	void showLaser();
};

#endif
