#include <stdio.h>
int main(void)
{
	int n, t, c, p;//���� ��, ��Ÿ�ĸ��� �ڶ�µ� �ɸ��� ��, ���� �� �ִ� ĭ, ���� ����
	scanf_s("%d %d %d %d", &n, &t, &c, &p);
	printf("%d", ((n-1) / t)*c*p);
}