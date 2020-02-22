#include <stdio.h>
int main(void)
{
	int n;
	int sum = 0;
	scanf_s("%d", &n);
	getchar();//엔터 받음
	for (int i = 0; i < n; i++)
	{
		sum += (getchar() - 48);//'0'만큼 뺌
	}

	printf("%d", sum);
}