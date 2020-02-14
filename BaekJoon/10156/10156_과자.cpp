#include <stdio.h>
int main(void)
{
	int k, n, m;
	scanf_s("%d %d %d", &k, &n, &m);
	int t = (k*n)-m;
	if (t < 0)
	{
		t = 0;
	}
	printf("%d",t);
}