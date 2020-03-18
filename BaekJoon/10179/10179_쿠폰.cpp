#include <stdio.h>
int main(void)
{
	int t;
	double q;
	scanf_s("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf_s("%lf", &q);
		printf("$%.2f\n", q*0.8);
	}
}