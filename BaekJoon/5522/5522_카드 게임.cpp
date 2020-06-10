#include <stdio.h>
int main(void)
{
	int a;
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &a);
		sum += a;
	}
	printf("%d", sum);
}