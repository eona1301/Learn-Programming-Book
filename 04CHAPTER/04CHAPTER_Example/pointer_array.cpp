#include <iostream>
using namespace std;

void main(){
	cout << "�Է��� ������ ������? ";
	int n;
	cin >> n;
	if (n <= 0) { exit(0); }
	int *p = new int[n];

	if (!p)	{
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		exit(0);
	}

	for (int i = 0; i < n; i++)	{
		cout << i + 1 << "��° ���� : ";
		cin >> p[i];
	}

	int sum = 0;

	for (int i = 0; i < n; i++)
		sum += p[i];

	cout << "��� = " << sum / n << endl;

	delete[] p;
}