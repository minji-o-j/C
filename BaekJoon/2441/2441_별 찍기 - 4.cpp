#include <stdio.h>
int main(void)
{
	int n;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int star = 0; star < i + 1-1; star++)
		{
			printf(" ");
		}
		for (int space = 0; space < n - i; space++) {
			printf("*");
		}


		printf("\n");
	}
}