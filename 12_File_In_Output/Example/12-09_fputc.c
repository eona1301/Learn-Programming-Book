#include <stdio.h>													// fputc, fopen, fclose �Լ��� ���� ��� ����
#include <stdlib.h>													// exit �Լ��� ���� ��� ����

int main() {
	FILE *fp2;														// ���� ������
	char f_name2[30], ch;											// ���⸦ �� ���ϸ�

	printf("���� ���ϸ� : ");
	gets(f_name2);													// ���ϸ� �Է�

	fp2 = fopen(f_name2, "w");										// ������ ��������� ����
	
	if (fp2 == NULL) {												// ���� ���� ���� ó��
		printf("%s ���� ����� ����\n", f_name2);
		exit(1);
	}

	scanf("%c", &ch);												// Ű���忡�� ���� �Ѱ� �Է��ϱ�

	while (ch != '&') {												// �Է� ���� �˸��� &�� �ƴ϶�� ��� �Է��ϱ�
		fputc(ch, fp2);												// ��� �Է¹��� ch�� ����� ���ڸ� ���Ͽ� ����ϱ�
		scanf("%c", &ch);											// ch - fgetc(stdin);�� ����
	}

	fclose(fp2);													// ���� �ݱ�

	return 0;
}