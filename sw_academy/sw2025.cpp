#include <stdio.h>
int main(void) {
	int a;
	scanf_s("%d", &a);
	int sum = 0;
	for (int i = a; i > 0; i--)
		sum += i;

	printf("%d", sum);
	return 0;
}