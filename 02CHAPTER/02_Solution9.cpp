//2017-1�б� C++ 20163131 ������
#include <iostream>
using namespace std;

void main()
{
	char name[11], address[50];
	int age;

	cout << "�̸���? ";
	cin.getline(name, 11, '\n');

	cout << "�ּҴ�? ";
	cin.getline(address, 50, '\n');

	cout << "���̴�? ";
	cin >> age;

	cout << "\n" << name << ", " << address << ", " << age << "��" << endl << endl;
}