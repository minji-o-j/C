#include <stdio.h>
int main(void)
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	printf("%d\n%d\n%d\n%d", (a + b) % c, (a%c + b % c) % c, (a*b) % c, (a%c * b%c) % c);
}