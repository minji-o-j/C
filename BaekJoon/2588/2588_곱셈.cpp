#include <stdio.h>
int main(void)
{
	int a, b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("%d\n%d\n%d\n%d", a*(b % 10), a*(((b % 100) - (b % 10))/10), a*(b / 100), a*b);
}