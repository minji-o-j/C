#include <stdio.h>
int main(void)
{
	int l, p;
	int a, b, c, d, e;
	scanf("%d %d %d %d %d %d %d", &l, &p, &a, &b, &c, &d, &e);
	int t = l * p;
	printf("%d %d %d %d %d", a - t, b - t, c - t, d - t, e - t);
}