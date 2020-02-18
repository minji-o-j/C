#include <stdio.h>
int main(void)
{
	int t,a,b;
	scanf_s("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf_s("%d %d", &a, &b);
		printf("Case #%d: %d\n", i + 1,a+b);
	}
}