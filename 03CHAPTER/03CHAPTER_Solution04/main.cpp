//2017-1�б� C++ 20163131 ������
#include <iostream>
#include "Ramdom.h"
using namespace std;

void main() {
	Random r;

	cout << "\n--0���� " << RAND_MAX << "������ ���� ���� 10��--" << endl;

	for (int i = 0; i < 10; i++) {
		int num = r.next();
		cout << num << " ";
	}

	cout << endl << endl;

	cout << "--2���� 10 ������ ���� ���� 10��--" << endl;

	for (int i = 0; i < 10; i++) {
		int num = r.EvenRondom(2, 10);
		cout << num << " ";
	}

	cout << endl << endl;
}