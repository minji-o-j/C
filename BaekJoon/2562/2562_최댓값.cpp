#include <stdio.h>
int main(void)
{
	int arr[9];
	int larg;
	int count;
	for (int i = 0; i < 9; i++)
	{
		scanf_s("%d", &arr[i]);
		if (i == 0)
		{
			larg = arr[0];
			count = 1;
		}
		if (arr[i] > larg)
		{
			larg = arr[i];
			count = i + 1;
		}
	}
	printf("%d\n%d", larg, count);
}