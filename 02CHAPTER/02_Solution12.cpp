//2017-1�б� C++ 20163131 ������
#include <iostream>
using namespace std;

int sum(int num1, int num2);

void main()
{
	int n = 0;

	cout << "�� ���� �Է��ϼ���>> ";
	cin >> n;

	cout << "1���� " << n << "������ ���� " << sum(1, n) << "�Դϴ�." << endl;
}

int sum(int num1, int num2)
{
	int i, result = 0;

	for (i = num1; i <= num2; i++)
		result += i;

	return result;
}