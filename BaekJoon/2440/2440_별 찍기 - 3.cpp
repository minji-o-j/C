#include <stdio.h>
int main(void)
{
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int t = 0; t < n - i ; t++) {
			printf("*");
		}
		printf("\n");
	}
}