#define _CRT_NO_WARNING
#include <stdio.h>

void year(int n)
{
	int state = 0;
	//윤년이면 1 아니면 0

	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
	{
		state = 1;
	}
	

	printf("%d\n", state);
}


int main(void)
{
	year(2000);
	year(2012);
	year(2015);
}