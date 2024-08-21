#include "inkjet.h"

InkJet::InkJet() :Printer() {
	this->availableInk = 0;
}
InkJet::InkJet(int availableInk): Printer("Officejet V40", "Hp", 5) {
	this->availableInk = availableInk;
}

int InkJet::getAvailableInk() {
	return availableInk;
}

void InkJet::printInkJet(int pages) {
	availableInk -= pages;
}

void InkJet::showInkJet() {
	showPrint();
	cout << "³²Àº À×Å© " << availableInk << endl;
}
