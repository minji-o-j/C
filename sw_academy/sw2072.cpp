#include <stdio.h>
int main()
{
	int n;
	int arr[10];
	int sum;

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
			if (arr[j] % 2 == 1)
			{
				sum += arr[j];
			}

		}

		printf("#%d %d\n", i + 1, sum);

	}


	return 0;
}
