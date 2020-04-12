#include <stdio.h>
int main(void)
{
	
	double a = 0.75;
	double x = -1;
	for (int i = 0; i < 5; i++)
	{
		x = x - a * (2 * x);
	}
	printf("%f", x);
}