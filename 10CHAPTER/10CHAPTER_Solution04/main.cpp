#include <iostream>
using namespace std;

void main(){
	int x[] = { 1,10,100,5,4 };
	
	if (search(100, x, 5))
		cout << "100�� �迭 x�� ���ԵǾ� �ִ�." << endl;
	else
		cout << "100�� �迭 x�� ���ԵǾ����� �ʴ�." << endl;
}