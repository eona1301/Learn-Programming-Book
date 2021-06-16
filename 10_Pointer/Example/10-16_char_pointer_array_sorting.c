#include <stdio.h>
#include <string.h>									// strcmp �Լ��� ���� ��� ����

int main() {
	char *gold[] = { "�Ѻ�", "������", "�̸���", "����α�", "Ȳ��" };
	char *temp;										// ���ڿ� �ּҸ� �ӽ÷� ������ ������
	int size, i, j;									// �迭�� ����� ���ڿ��� ��

	// char�� ������ �迭 gold�� ���Ҽ��� size�� ���ϱ�
	size = sizeof(gold) / sizeof(gold[0]);

	printf("** �ݸ޴� ����Ʈ : ");
	for (i = 0; i < size; i++)						// ���� �� �迭 ���� ����ϱ�
		printf("%s, ", gold[i]);
	printf("\b\b **\n\n");							// \b�� �̿��Ͽ� ������ �̸� ���� , �����

	// ��ȯ ������ �̿��Ͽ� �̸��� �����ټ����� �����ϱ�
	for(i=0;i<size-1;i++)
		for(j=i+1;j<size;j++)
			if (strcmp(gold[i], gold[j]) > 0) {
				// ���ڿ��� �����ּҸ� ������ gold[i]�� gold[j]�� ��ȯ
				temp = gold[i];
				gold[i] = gold[j];
				gold[j] = temp;
			}

	printf("** ������ ����Ʈ : ");
	for (i = 0; i < size; i++)						// ���� �� �迭 ���� ����ϱ�
		printf("%s, ", gold[i]);
	printf("\b\b **\n\n");							// \b�� �̿��Ͽ� ������ �̸� ���� , �����
}