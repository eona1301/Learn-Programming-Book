//2017-1�б� C++ 20163131 ������
#include <iostream>
using namespace std;

void main()
{
	char s1[10], s2[10];

	cout << "�� ��ȣ�� �Է��ϼ���>> ";
	cin >> s1;

	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>> ";
	cin >> s2;

	if (strcmp(s1, s2) == 0)
		cout << "�����ϴ�." << endl;
	else
		cout << "���� �ʽ��ϴ�." << endl;
}