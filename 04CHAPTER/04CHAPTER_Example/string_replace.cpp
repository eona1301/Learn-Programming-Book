#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;

	cout << "���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� &�����Դϴ�." << endl;
	getline(cin, s, '&'); //�迭�� NULL ó�� ���� �˷��ִ� ���ڿ��� �� ���� ���ͷθ� ������
	cin.ignore();		//&�ڿ� ���� ���� \n�� �����ִ� �����̴�.

	string f, r;

	cout << endl << "find : ";
	getline(cin, f, '\n');

	cout << "replace : ";
	getline(cin, r, '\n');

	int startIndex = 0;

	while (true)
	{
		int fIndex = s.find(f, startIndex);

		if (fIndex == -1) { break; }

		s.replace(fIndex, f.length(), r);
		startIndex = fIndex + r.length();
	}

	cout << s << endl;
}

/*
//���� �Է� ���� ����
It's now or necer, come hold me tight. Kiss me my darling, be mine tonight
Tomorrow will be too late. It's new or never, my love won't wait&
*/