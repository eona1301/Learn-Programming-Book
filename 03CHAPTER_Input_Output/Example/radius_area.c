//�������б� ��ǻ�Ͱ��к� 16�й� ������ �ۼ� (Email : dang0113@naver.com)
#include <stdio.h>

int main()
{
	double radius, area, pi = 3.14;

	printf("�������� �Է��ϼ���. ");
	scanf("%lf", &radius);

	area = pi*radius*radius;

	printf("������ %.2lf ���� ������ %.2lf�Դϴ�.\n", radius, area);

	return 0;
}