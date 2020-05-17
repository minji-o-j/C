#include <stdio.h>
#include <math.h>
#define LI 10
#define RR 1000
int main(void)
{
	double c, a;
	double Frequency;
	for (c = 0.01; c <= 0.1; c += 0.01)
	{
		a = (1 / LI * c) - (RR*RR) / (4*c*c);
		Frequency = sqrt(a);

		printf("F: %f\n", Frequency);
	}
}