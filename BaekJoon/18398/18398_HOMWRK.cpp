#include <stdio.h>
int main(void)
{
	int T, N,a,b;
	scanf_s("%d", &T);
	for (int j = 0; j < T; j++)
	{
		scanf_s("%d", &N);
		for (int i = 0; i < N; i++)
		{
			scanf_s("%d %d", &a, &b);
			printf("%d %d\n", a + b, a*b);
		}
	}
}