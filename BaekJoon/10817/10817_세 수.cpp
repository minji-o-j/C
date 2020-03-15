#include <stdio.h>
int main(void)
{
	int a, b, c;
	int tmp = 0;
	scanf_s("%d %d %d", &a, &b, &c);
	for (int i = 0; i < 2; i++)
	{
		if (b < a)
		{
			tmp = a;
			a = b;
			b = tmp;
		}
		if (c < b)
		{
			tmp = b;
			b = c;
			c = tmp;
		}
	}
	printf("%d", b);
}