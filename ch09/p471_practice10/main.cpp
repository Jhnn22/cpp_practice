#include "diagram.h"
#include "grapiceditor.h"
#include "ui.h"

int main() {
	GrapicEditor grapicEditor;

	UI::display();
	while (true) {
		UI::menu1();
		int n1 = UI::select();

		switch (n1) {
		case 1: {
			UI::menu2();
			int n2 = UI::select();
			Shape* diagram = nullptr;
			switch (n2) {
			case 1: 
				diagram = new Line(); break;
			case 2:
				diagram = new Circle(); break;
			case 3:
				diagram = new Rect(); break;
			default:
				break;
			}
			if (diagram != nullptr) grapicEditor.add(diagram);
			break;
		}
		case 2: {
			UI::menu3();
			int n3 = UI::select();
			grapicEditor.remove(n3);
			break;
		}
		case 3: {
			grapicEditor.show();
			break;
		}
		case 4: {
			return 0;
		}
		default:
			break;
		}
	}

	return 0;
}