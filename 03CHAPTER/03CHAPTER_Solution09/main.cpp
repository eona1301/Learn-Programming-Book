//2017-1�б� C++ 20163131 ������
#include <iostream>
#include "Box.h"
using namespace std;


void main() {
	Box b(10, 2);
	b.draw();

	cout << endl << endl;

	b.setSize(7, 4);
	b.setFill('^');
	b.draw();

	cout << endl << endl;
}