//2017-1�б� C++ 20163131 ������
#include <iostream>
#include "Random.h"
using namespace std;

void main()
{
	Random r;

	cout << "\n--0���� " << RAND_MAX << "������ ���� ���� 10��--" << endl;

	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}

	cout << endl << endl << "--2���� 4 ������ ���� ���� 10��--" << endl;

	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}

	cout << endl << endl;
}