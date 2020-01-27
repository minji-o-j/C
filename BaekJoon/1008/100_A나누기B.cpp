#include <stdio.h>
int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%.12f", (double)a / b);
	return 0;
}