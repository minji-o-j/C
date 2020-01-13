#include <stdio.h>
int main(void) {
	int a, b;
	scanf_s("%d %d", &a, &b);
	int c = a - b + 1;
	printf("%d", c);
	return 0;
}