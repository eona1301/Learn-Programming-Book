#include <stdio.h>

void sort_by_pointer(int *first, int *second);	// �Լ��� ���� ����

// main �Լ��� ����
int main() {
	int point1 = 5000, point2 = 4000;

	printf("�Լ� ȣ�� �� ����Ʈ ���� %d, %d\n", point1, point2);

	sort_by_pointer(&point1, &point2);

	printf("�Լ� ȣ�� �� ����Ʈ ���� %d, %d\n", point1, point2);

	return 0;
}

// �� �Ű������� ������������ �����ϴ� �Լ�
void sort_by_pointer(int *first, int *second) {
	int temp;

	if (*first > *second) {	// ���ĵ� ���°� �ƴ϶�� �� ���� ��ȯ
		temp = *first;
		*first = *second;
		*second = temp;
	}

	printf("\n(sort �Լ��� ���� ��� first : %d, second : %d\n\n", *first, *second);
}