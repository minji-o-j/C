#include <stdio.h>
#include <stdlib.h>
int findLarge(int num[],int n)
{
	int l = num[0];
	for (int j = 0; j < n; j++)
	{
		if (l < num[j])
			l = num[j];
	}
	return l;
}

int main(void)
{
	int n;
	int m;//biggest number
	double sum = 0;
	scanf_s("%d", &n);
	int* num = (int*)malloc(sizeof(int)*n);
	double* num2 = (double*)malloc(sizeof(double)*n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &num[i]);
	}

	m = findLarge(num,n);

	for (int k = 0; k < n; k++)
	{
		num2[k] = (double)num[k] / m * 100;
		sum += num2[k];
	}


	printf("%f", (sum) / n);
}