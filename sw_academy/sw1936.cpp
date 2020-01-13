#include <stdio.h>
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	if ((a == 1 && b == 3) || (a == 2 && b == 1) || (a == 3 && b == 2))
		printf("A");
	if ((b == 1 && a == 3) || (b == 2 && a == 1) || (b == 3 && a == 2))
		printf("B");
	return 0;
}