#include <stdio.h>
int main(void)
{
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", n - i);
	}
	return 0;
}