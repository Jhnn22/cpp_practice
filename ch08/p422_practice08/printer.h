#ifndef _PRINTER_H
#define _PRINTER_H

#include <iostream>
#include <string>
using namespace std;

class Printer {
	string model;
	string manufacturer;
	int availableCount;
public:
	Printer();
	Printer(string, string, int);

	int getAvailableCount();
	void print(int pages);
	void showPrint();
};

#endif
