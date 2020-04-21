#include <stdio.h>
int main(void)
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	printf("%d", (((a + 1)*(b + 1)) / (c + 1))-1);
}