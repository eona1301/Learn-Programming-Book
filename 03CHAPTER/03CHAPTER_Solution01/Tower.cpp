//2017-1�б� C++ 20163131 ������
#include <iostream>
#include "Tower.h"
using namespace std;

Tower::Tower() {
	height = 1;
}

Tower::Tower(int h) {
	height = h;
}

int Tower::getHeight() {
	return height;
}