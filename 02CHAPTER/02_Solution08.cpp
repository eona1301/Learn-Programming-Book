
//2017-1�б� C++ 20163131 ������
#include <iostream>
using namespace std;

void main()
{
	char name_line[1000];
	int i, j, leght, count = 0, cnt = 0;

	cout << "5���� �̸��� ';'���� �����Ͽ� �Է��ϼ���\n>> ";
	cin.getline(name_line, 1000, '\n');

	leght = strlen(name_line);

	for (i = 0; i < 5; i++)
	{
		cout << i << " : ";

		for (j = count; j < leght - 1; j++)
		{
			if (name_line[j] == ';')
			{
				cnt++;
				break;
			}

			cout << name_line[j];
			cnt++;
		}
		count = cnt;
		cout << endl;
	}
}
