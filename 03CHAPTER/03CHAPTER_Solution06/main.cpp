//2017-1�б� C++ 20163131 ������
#include <iostream>
#include "integer.h"
using namespace std;

void main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}