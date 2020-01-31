#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int N;
	int MAX, MIN;
	scanf_s("%d", &N);
	int*num = (int*)malloc(sizeof(int)*N);
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &num[i]);
		if (i == 0)
		{
			MAX = num[i];
			MIN = num[i];
		}
		if (MAX < num[i])
		{
			MAX = num[i];
		}
		if (MIN > num[i])
		{
			MIN = num[i];
		}
	}
	printf("%d %d", MIN, MAX);
	free(num);
	return 0;
}