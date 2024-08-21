#include "printer.h"

Printer::Printer(): Printer("", "", 0) {}
Printer::Printer(string model, string manufacturer, int availableCount) {
	this->model = model;
	this->manufacturer = manufacturer;
	this->availableCount = availableCount;
}

int Printer::getAvailableCount() {
	return availableCount;
}

void Printer::print(int pages) {
;	availableCount -= pages;
}

void Printer::showPrint() {
	cout << model << ", " << manufacturer << ", " << "남은 종이 " << availableCount << "장, ";
}
