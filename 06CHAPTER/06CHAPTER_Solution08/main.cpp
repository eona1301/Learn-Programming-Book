#include <iostream>
#include "Trace.h"
using namespace std;

void f()
{
	int a, b, c;
	cout << "�� ���� ������ �Է��ϼ��� >> ";
	cin >> a >> b;
	Trace::put("f()", "������ �Է� �޾���");
	c = a + b;
	Trace::put("f()", "�� ���");
	cout << "���� " << c << endl;
}

void main()
{
	Trace::put("main()", "���α׷� �����մϴ�.");
	f();
	Trace::put("main()", "����");

	Trace::print("f()");
	Trace::print();
}