#include <stdio.h>

// ���ο� �ڷ��� ����ü
struct game {
	char name[7];		// ���� �̸��� ������ �迭 (�ѱ� �� �� ���� ����)
	int R1, R2, R3;		// �� ���� ����
};

int main() {
	struct game player;			// ����ü ���� ����
	double avg;

	// ������ ��� ���� �Է�
	printf("������ �̸���? ");
	scanf("%s", player.name);
	printf("1, 2, 3�Ͽ�� ������? ");
	scanf("%d %d %d", &player.R1, &player.R2, &player.R3);

	// 1, 2, 3������ ��� ���� ���ϱ�
	avg = (double)(player.R1 + player.R2 + player.R3) / 3;

	// ���� ��� ����ϱ�
	printf("%s������ ���� ���� ��� %.1lf��\n", player.name, avg);

	return 0;
}