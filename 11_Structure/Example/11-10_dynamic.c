#include <stdio.h>
#include <stdlib.h>			// malloc, free �Լ��� ���� ��� ����

int main() {
	int size, sum, i;		// �л� �� �� �迭�� ���Ҽ�
	int *score;				// �������� �Ҵ���� �����Ҹ� ����ų ������ ���� �� �迭��

	// ���� �Ҵ� �������� ũ�⸦ �����ϱ� ���� �л� ���� �Է¹ޱ�
	printf("�л�����? ");
	scanf("%d", &size);

	// size ������ int�� ���� ������ ���� ������ �Ҵ� �� score�� ����Ű��
	score = (int *)malloc(sizeof(int)*size);

	// ���� �Ҵ��� ���� ���ߴٸ� ���α׷��� ������ ������.
	if (score == NULL) {
		printf("���� ������ �Ҵ翡 �����Ͽ����ϴ�.\n");
		exit(1);			// ���α׷� ���� �ߴ�
	}

	// ���� �迭�� �ڷ� �Է� �� ����� ���Ͽ� ����ϱ�
	sum = 0;
	for (i = 0; i < size; i++) {
		printf("%d��° �л��� ������? ", i + 1);
		scanf("%d", &score[i]);					// scanf("%d", score+i);�� ����
		sum += score[i];
	}
	printf("\n%d���� ��� : %.1lf\n", size, (double)sum / size);

	// score�� ����Ű�� �������� �Ҵ���� ������ ����
	free(score);

	return 0;
}