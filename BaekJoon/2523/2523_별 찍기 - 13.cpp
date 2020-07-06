#include <stdio.h>
int main(void)
{
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < 2 * n - 1; i++)
	{
		if (i < n)
		{
			for (int j = 0; j < i+1; j++)
			{
				printf("*");
			}
		}
		else
		{
			for (int k = 2*n-i-1; k > 0; k--)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}