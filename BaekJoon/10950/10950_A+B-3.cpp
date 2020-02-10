#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int t = 0;
	scanf_s("%d", &t);
	int *A = (int*)malloc(sizeof(int)*t);
	int *B = (int*)malloc(sizeof(int)*t);

	for (int i = 0; i < t; i++)
	{
		scanf_s("%d %d\n", &A[i], &B[i]);
		printf("%d\n", A[i] + B[i]);
	}
}