#include <stdio.h>

int main()
{
	int x = 1, y = 2, z = 3;

	x = ++x * 5;	// 전위형이므로
	y = y++ * 5;	// 후위형이므로
	z = 5 - --z;	// 전위형이므로

	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n", z);

	return 0;
}