//2017-1�б� C++ 20163131 ������
#include <iostream>
#include "Tower.h"
using namespace std;

void main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
}