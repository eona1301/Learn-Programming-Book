//�������б� ��ǻ�Ͱ��к� 16�й� ������ �ۼ�(Email : dang0113@naver.com)
#include <stdio.h>

int main()
{
	int x, y;

	x = y = 5;

	printf("x = %d, y = %d\n", x, y);
	printf("x += y�� ����� %d\n\n", x += y);

	printf("x = %d, y = %d\n", x, y);
	printf("x -= y�� ����� %d\n\n", x -= y);

	printf("x = %d, y = %d\n", x, y);
	printf("x *= y�� ����� %d\n\n", x *= y);

	printf("x = %d, y = %d\n", x, y);
	printf("x /= y�� ����� %d\n\n", x /= y);

	printf("x = %d, y = %d\n", x, y);
	printf("x %%= y�� ����� %d\n\n", x %= y);

	return 0;
}