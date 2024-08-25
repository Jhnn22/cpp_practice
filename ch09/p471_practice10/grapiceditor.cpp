#include "grapiceditor.h"

GrapicEditor::GrapicEditor(): pstart(nullptr), plast(nullptr), count(0) {}

void GrapicEditor::add(Shape* diagram) {
	if (pstart == nullptr) pstart = plast = diagram;
	else {
		plast->next = diagram;
		plast = plast->next;
	}
	plast -> next = nullptr;
	count++;
}

void GrapicEditor::remove(int index) {
	if (pstart == nullptr || index < 0 || index > count - 1) return;

	Shape* tmp;
	Shape* prev = pstart;
	if (index == 0) {
		tmp = pstart;
		if(pstart->next != nullptr) pstart = pstart->next;
	}
	else if (index == count - 1) {
		while (prev->next != plast) {
			prev = prev->next;
		}
		tmp = plast;
		plast = prev;
		plast->next = nullptr;
	}
	else {
		for (int i = 0; i < index - 1; i++) {
			prev = prev->next;
		}
		tmp = prev->next;
		prev->next = tmp->next;
	}

	delete tmp;
	count--;
}

void GrapicEditor::show() {
	Shape* tmp = pstart;
	int index = 0;
	while (tmp != nullptr) {
		tmp->diagram(index);
		tmp = tmp->next;
		index++;
	}
}