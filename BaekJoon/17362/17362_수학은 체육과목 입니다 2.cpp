#include <stdio.h>
int main(void)
{
	unsigned int num = 0;
	scanf_s("%d", &num);
	//규칙
	/*
	1 5 9 13 17 21...
	%4를했을때 0일때
	-1을 해서 /4를 해서 해가 홀수면 엄지(1) 짝수면 약지(5)
	
	%4를 했을때 0이 아닌 경우 는
	해/4가 짝수인경우는 나머지를 더하고
	해/4가 홀수인 경우는 나머지를 뺀다.
	*/
	int or15 = (num - 1) % 4;
	int sel15 = (num - 1) / 4;
	
	if (or15 == 0) //엄지 또는 약지
	{
		if (sel15 %2 == 0)	//짝수
		{
			printf("1");
		}
		else   //홀수
		{
			printf("5");
		}
	}
	else
	{
		if (sel15 % 2 == 0)	//짝수
		{
			printf("%d", 1 + or15);
		}
		else   //홀수
		{
			printf("%d", 5- or15);
		}
	}
	return 0;
}