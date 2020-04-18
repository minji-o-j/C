#include <stdio.h>
int main(void)
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a == b && b == c)
	{
		printf("%d", 10000 + a * 1000);
	}
	else if (a == b || b == c || a == c)
	{
		if (a == b || b == c)
		{
			printf("%d", 1000 + b * 100);
		}
		else
		{
			printf("%d", 1000 + c * 100);
		}
	}
	else
	{
		if (a >= b && a >= c)
		{
			printf("%d", a * 100);
		}
		else if (b >= a && b >= c)
		{
			printf("%d", b * 100);
		}
		else
			printf("%d", c * 100);
	}
}