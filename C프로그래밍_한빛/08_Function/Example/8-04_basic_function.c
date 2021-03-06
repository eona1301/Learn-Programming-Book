#include <stdio.h>

// find_larger 함수의 원형 선언
int find_larger(int first, int second);

// main 함수의 정의
int main() {
	int n1, n2, max;

	printf("첫째 정수? ");
	scanf("%d", &n1);
	printf("둘째 정수? ");
	scanf("%d", &n2);

	// find_larger 함수를 호출 후 반환된 값을 max에 저장
	max = find_larger(n1, n2);

	printf("%d, %d 중 큰 값은 %d\n", n1, n2, max);

	return 0;
}

// find_larger 함수의 정의
int find_larger(int first, int second) {
	int larger;

	if (first > second)
		larger = first;
	else
		larger = second;

	return larger;
}