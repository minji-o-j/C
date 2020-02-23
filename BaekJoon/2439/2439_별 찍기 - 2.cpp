#include <stdio.h>
int main(void)
{
	int n;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int space = 0; space < n-i-1; space++) {
			printf(" ");
		}

		for (int star = 0; star < i+1; star++)
		{
			printf("*");
		}
		printf("\n");
	}
}