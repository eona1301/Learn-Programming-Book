//�������б� ��ǻ�Ͱ��к� 16�й� ������ �ۼ�(Email : dang0113@naver.com)
#include <stdio.h>

int main()
{
	int x;

	printf("���� �Է� >> ");
	scanf("%d", &x);

	(x % 2 == 0) ? printf("%d�� ¦���Դϴ�.\n", x) : printf("%d�� Ȧ���Դϴ�.\n", x);

	return 0;
}