#include <stdio.h>
#include <math.h>			// sin �Լ��� ���� ��� ����
#define PI 3.141592

// �Լ��� ���� ����
double get_sin(double degree);

// main �Լ� ����
int main() {
	int degree;		// ���� ���� ������ ����

	for (degree = 0; degree <= 180; degree += 30)
		printf("sin(%d��) = %.5lf\n", degree, get_sin(degree));
	
	printf("========================================================\n");
	printf("sin �Լ� ���� ���� ������?");
	scanf("%d", &degree);

	printf("sin(%d��) = %.5lf\n", degree, sin(degree));

	return 0;
}

// ���� ������ �μ��� ���޹޾� ���� �ﰢ�Լ� ���� ��ȯ�ϴ� �Լ�
double get_sin(double degree) {
	double radian;

	radian = (PI * degree) / 180;	// ������ ���� ������ ��ȯ

	return sin(radian);
}