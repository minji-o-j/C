#include <stdio.h>
int main(void)
{
	for (int i = 2; i <= 9; i++)
	{
		printf("   ** %d´Ü **\n",i);
		for (int j = 1; j <= 9; j++)
		{
			printf("%3d   x %3d   =   %3d\n", i, j,i*j);
		}
	}
}