#include <stdio.h>
#include <math.h>
int main(void)
{
	int T;
	int d, dt;
	int finaldt;
	scanf_s("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf_s("%d", &d);//수업시간
		dt = (int)sqrt(d);
		if (dt+dt*dt>d)
		{
			finaldt = dt - 1;
		}
		else
			finaldt = dt;
		printf("%d\n",finaldt );

	}
}