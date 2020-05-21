#include <stdio.h>
int main(void)
{
	int n;
	int sum = 0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (n%i == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum * 5 - 24);
}