//2017-1�б� C++ 20163131 ������
#include <iostream>
using namespace std;

void main()
{
	char arr[100];
	int x = 0, leght, i;

	cout << "���ڵ��� �Է��϶�(100�� �̸�)." << endl;
	cin.getline(arr, 100, '\n');

	leght = strlen(arr);

	for (i = 0; i < leght - 1; i++)
		if (arr[i] == 'x')
			x++;

	cout << "x�� ������ " << x << endl;
}