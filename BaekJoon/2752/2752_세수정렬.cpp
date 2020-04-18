#include <stdio.h>
int main(void)
{
	int a, b, c;
	int tmp = -1;
	scanf_s("%d %d %d", &a, &b, &c);
	
	for (int i = 0; i < 2; i++)
	{
		if (a > b)
		{
			tmp = a;
			a = b;
			b = tmp;
		}
		if (b > c)
		{
			tmp = b;
			b = c;
			c = tmp;
			
		}
	}
	printf("%d %d %d", a, b, c);
}