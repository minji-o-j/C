#include <stdio.h>
int main(void)
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d\n%d\n%d\n%d\n%d", a + b, a - b, a*b, a / b, a%b);
}