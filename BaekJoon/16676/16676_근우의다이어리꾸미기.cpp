#include <stdio.h>
int N = 0;

int countLength(int n)	//자릿수 세기
{
	int k = n;
	int cnt = 0;
	do
	{
		k = k / 10;
		cnt++;
	} while (k > 0);//0일때도 1자리라고 생각
	return cnt;
}

int makeOnly1(int n) {
	int o1 = 1;
	int length = countLength(n);
	for (int i = 1; i < length; i++)
	{
		o1 *= 10;
		o1 += 1;
	}
	return o1;
}
int main(void)
{
	scanf_s("%d", &N);
	int l = countLength(N);
	if (N == 0)
	{
		printf("1");
		return 0;
	}
	else
	{
		if (N < makeOnly1(N))
		{
			printf("%d", l - 1);
			return 0;
		}
		printf("%d", l);
	}
	return 0;
}