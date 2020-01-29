#include <stdio.h>
int sum = 0;

int main(void)
{
	int std[5];
	scanf_s("%d %d %d %d %d", &std[0], &std[1], &std[2], &std[3], &std[4]);

	for (int i = 0; i < 5; i++)
	{
		if (std[i] < 40)
		{
			std[i] = 40;
		}
		
		sum += std[i];
	}

	printf("%d", sum / 5);
	return 0;
}