//2017-1�б� C++ 20163131 ������
#include <iostream>
#include "sum_h.h"
using namespace std;

int main(void)
{
	int n = 0;

	cout << "�� ���� �Է��ϼ���>> ";
	cin >> n;

	cout << "1���� " << n << "������ ���� " << sum(1, n) << "�Դϴ�." << endl;
}