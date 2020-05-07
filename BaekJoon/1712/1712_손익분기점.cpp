#include <stdio.h>
int main(void)
{
	unsigned long long a, b, c;
	int cnt = 1;
	scanf_s("%llu %llu %llu", &a, &b, &c);

	if (b>=c)
	{
		cnt = -1;
	}
	else//((a + b * cnt) < c*cnt)
	{
		cnt = a / (c - b) + 1;
	}

	printf("%d", cnt);
}