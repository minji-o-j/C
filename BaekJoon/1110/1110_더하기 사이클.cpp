#include <stdio.h>
int main(void)
{
	int n;
	scanf_s("%d", &n);//1~2자리 숫자 입력받음

	int nnum = (n % 10) * 10 + ((n / 10) + (n % 10))%10;
	int count = 1;

	while (nnum != n)
	{
		nnum = 10 * (nnum % 10) + ((nnum / 10) + (nnum % 10))%10;
		count++;
		//printf("---\n%d\n", nnum);
	}
	printf("%d", count);
}