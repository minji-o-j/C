#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int even(int n)
{
	if (n % 2 == 0)
		return 1;
	return 0;
}
int absolute(int n)
{
	return n > 0 ? n : -1 * n;
}
int sign(int n)
{
	if (n == 0)
		return 0;
	return n > 0 ? 1 : -1;
}
int main(void)
{
	int n = 0;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	
	if (even(n) == 1)
		printf("even()의 결과: 짝수\n");
	else
		printf("even()의 결과: 홀수\n");

	printf("absolute()의 결과: %d\n", absolute(n));

	if (sign(n) == 1)
		printf("sign()의 결과: 양수\n");
	else if (sign(n) == 1)
		printf("sign()의 결과: 0\n");
	else
		printf("sign()의 결과: 음수\n");


}