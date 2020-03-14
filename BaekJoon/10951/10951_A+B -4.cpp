#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b,c;
	while (1)
	{
		c=scanf("%d %d", &a, &b);
		getchar();
		if (c == EOF)
			break;
		else
			printf("%d\n", a + b);
	}
}