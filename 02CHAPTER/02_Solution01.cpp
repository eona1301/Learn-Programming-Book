//2017-1�б� C++ 20163131 ������
#include <iostream>
using namespace std;

void main()
{
	int i, n = 0, sum = 0;

	cout << "�� ���� �Է��ϼ���>> ";
	cin >> n;

	for (i = 1; i <= n; i++)
		sum += i;

	cout << "1���� " << n << "������ ���� " << sum << "�Դϴ�." << endl;
}