#include <iostream>
using namespace std;

void main(){
	int x[] = { 1,10,100,5,4 };
	int y[] = { 1,10,100,5,4 };

	if (equalArrays(x, y, 5))
		cout << "����" << endl;
	else
		cout << "�ٸ���" << endl;
}