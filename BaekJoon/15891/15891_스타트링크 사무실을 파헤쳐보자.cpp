#include <stdio.h>

int main(void)
{
	int n;
	scanf_s("%d", &n);
	if (n == 1)
		printf("65");
	else if (n == 2)
		printf("17");
	else if (n == 3)
		printf("4");
	else if (n == 4)
		printf("4");
	else
		printf("64");
}