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
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	
	if (even(n) == 1)
		printf("even()�� ���: ¦��\n");
	else
		printf("even()�� ���: Ȧ��\n");

	printf("absolute()�� ���: %d\n", absolute(n));

	if (sign(n) == 1)
		printf("sign()�� ���: ���\n");
	else if (sign(n) == 1)
		printf("sign()�� ���: 0\n");
	else
		printf("sign()�� ���: ����\n");


}