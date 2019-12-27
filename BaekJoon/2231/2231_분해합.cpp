#include <stdio.h>
int main(void)
{
	int n, icpy;
	scanf_s("%d", &n);
	int minCon=n;// Constructure
	int state = -1;

	for (int i = n; i > 0; i--)
	{
		int sum = 0;
		int icpy = i;


		//자릿수 합구하기
		do {
			sum += icpy % 10;
			icpy /= 10;
		} while (icpy > 0);

		if (sum + i == n)
		{
			if (minCon > i)
			{
				minCon = i;
				state = 1;
			}
		}
	}
	if (state == 1)
		printf("%d", minCon);
	else
		printf("0");

}