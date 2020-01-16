#include <stdio.h>
int main()
{
	int n;
	int arr[10];
	double sum;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < 10; j++)
		{
			sum = 0;
			scanf("%d ", &arr[j]);

		}
		for (int j = 0; j < 10; j++)
		{
			sum += arr[j];
		}

		printf("#%d %.0f\n", i + 1, sum / 10);

	}


	return 0;
}
