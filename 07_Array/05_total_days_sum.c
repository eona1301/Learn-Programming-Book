#include <stdio.h>

int main() {
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int month, i, total = 0;

	printf("1������ ��������� ������ ���ұ��? ");
	scanf("%d", &month);

	for (i = 1; i <= month; i++) 
		total += days[i];
	
	printf("1������ %d�������� �� %d���� �ֽ��ϴ�.\n", month, total);
}