//2017-1�б� C++ 20163131 ������
#include <cstdlib>
#include <ctime>
#include "Random.h"

Random::Random() {
	start_num = 1;
	end_num = 10;
	srand((unsigned)time(0)); //���ึ�� �ٸ� ���� ���� �߻���Ű�� seed , ctime�� ���� include �� 
}

int Random::next() {
	start_num = 0;
	end_num = RAND_MAX;

	return rand(); //cstdlib�� ���ԵǾ��ִ� ���� �߻� �Լ�
}

int Random::nextInRange(int n1, int n2) {
	start_num = n1;
	end_num = n2;

	return n1 + (rand() % (n2 - n1 + 1)); //rand �Լ��� ���� ���� ��� = ���۰� + (rand() % (���� - ���۰� + 1))
}