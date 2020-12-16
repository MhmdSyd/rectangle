
#include "Rectangle.h"
#include <iostream>
using namespace std;

int main(void) {

	Rectangle A1;
	Rectangle A2(23.4,15.7);
	cout << A2.displayArea() << "\t" << A2.displayCircum() << endl;
	A1 = A2;
	A1.setLength(5.0);
	cout << A1.displayArea() << "\t" << A1.displayCircum() << endl;
	return 0;
}