//2017-1�б� C++ 20163131 ������
#include <iostream>
using namespace std;

void main()
{
	double num[5], max;
	int i = 0;

	cout << "5���� �Ǽ��� �Է��϶�>>";
	for (i = 0; i < 5; i++)
		cin >> num[i];

	max = num[0];

	for (i = 1; i <= 4; i++)
		if (max < num[i])
			max = num[i];

	cout << "���� ū �� = " << max << endl;
}