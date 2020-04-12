#include <stdio.h>
int main(void)
{
	int n, m, t;
	scanf("%d %d %d", &n, &m, &t);
	printf("%d %d", t / m, t %m);
}