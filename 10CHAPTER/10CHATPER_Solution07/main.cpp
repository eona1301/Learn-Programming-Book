#include <iostream>
using namespace std;

void main(){
	int a = 20, b = 50, c;
	c = bigger(a, b);
	cout << "20�� 50 �� ū ���� " << c << endl;
	Circle waffle(10), pizza(20), y;
	y = bigger(waffle, pizza);
	cout << "waffle�� pizza �� ū ���� �������� " << y.getRadius() << endl;
}