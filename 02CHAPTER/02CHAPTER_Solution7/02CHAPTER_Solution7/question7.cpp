//2017-1�б� C++ 20163131 ������
#include <iostream>
using namespace std;

void main()
{
	char ch[100];

	while (true)
	{
		cout << "�����ϰ������ yes�� �Է��ϼ���>> ";
		cin.getline(ch, 100, '\n');

		if (strcmp(ch, "yes") == 0)
		{
			cout << "�����մϴ�..." << endl;
			break;
		}
	}
}