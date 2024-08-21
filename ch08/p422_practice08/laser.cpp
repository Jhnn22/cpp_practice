#include "laser.h"

Laser::Laser(): Printer() {
	this->availableToner = 0;
}

Laser::Laser(int availableToner) : Printer("SCX-6x45", "삼성전자", 3) {
	this->availableToner = availableToner;
}

int Laser::getAvailableToner() {
	return availableToner;
}

void Laser::printLaser() {
	availableToner--;
}

void Laser::showLaser() {
	showPrint();
	cout << "남은 토너 " << availableToner << endl;
}