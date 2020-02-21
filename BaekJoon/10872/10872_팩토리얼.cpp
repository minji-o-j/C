#include <stdio.h>
int factorial(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}

int main(void)
{
	int k;
	scanf_s("%d", &k);
	printf("%d", factorial(k));
}