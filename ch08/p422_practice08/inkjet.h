#ifndef _INKJET_H
#define _INKJET_H

#include "printer.h"

class InkJet : public Printer {
	int availableInk;
public:
	InkJet();
	InkJet(int);

	int getAvailableInk();
	void printInkJet(int pages);
	void showInkJet();

};

#endif
