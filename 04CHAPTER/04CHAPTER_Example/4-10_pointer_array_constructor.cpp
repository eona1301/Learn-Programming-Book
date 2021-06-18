#include <iostream>
using namespace std;

class Circle{
	int radius;
public:
	Circle();
	~Circle();
	void setRadius(int r);
	double getArea();
};

Circle::Circle() { radius = 1; }
Circle::~Circle() {}
void Circle::setRadius(int r) { radius = r; }
double Circle::getArea() { return 3.14*radius*radius; }

void main(){
	cout << "�����ϰ��� �ϴ� ���� ����?";
	int n, radius;
	cin >> n;		// ���� ���� �Է�

	if (n <= 0) { exit(0); }

	Circle *pArray = new Circle[n];		// n���� Circle �迭 ����

	for (int i = 0; i < n; i++)	{
		cout << "��" << i + 1 << " : ";	// ������Ʈ ���
		cin >> radius;					// ������ �Է�
		pArray[i].setRadius(radius);	// �� Circle ��ü�� ���������� �ʱ�ȭ
	}

	int count = 0;						// ī��Ʈ ����
	Circle* p = pArray;

	for (int i = 0; i < n; i++)	{
		cout << p->getArea() << ' ';	// ���� ���� ���

		if (p->getArea() >= 100 && p->getArea() <= 200)		{
			count++;
		}
		p++;
	}

	cout << endl << "������ 100���� 200 ������ ���� ������ " << count << endl;

	delete[]pArray;						// ��ü �迭 �Ҹ�
}