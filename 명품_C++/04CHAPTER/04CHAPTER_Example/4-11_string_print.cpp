#include <iostream>
#include <string>
using namespace std;

void main(){
	string str;
	string address("����� ���ϱ� �Ｑ�� 389");
	string copyAddress(address);

	char text[] = { 'L', 'O', 'V', 'E', ' ', 'C', '+', '+', '\0' };

	string title(text);

	cout << str << endl;
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;
}