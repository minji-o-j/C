#include <stdio.h>
int main(void)
{
	int n;
	int sum = 0;
	scanf_s("%d", &n);
	getchar();//���� ����
	for (int i = 0; i < n; i++)
	{
		sum += (getchar() - 48);//'0'��ŭ ��
	}

	printf("%d", sum);
}