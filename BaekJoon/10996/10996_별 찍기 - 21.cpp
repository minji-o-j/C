#include <stdio.h>
int main(void)
{
	int n;
	int dn;

	scanf_s("%d", &n);

	dn = n / 2;
	for (int i = 0; i < n; i++)
	{
		//Ȧ����
		for (int odd = 0; odd < n - dn; odd++)
		{
			printf("* ");
		}
		printf("\n");
		//¦����
		for (int even = 0; even < dn; even++)
		{
			printf(" *");
		}
		printf("\n");
	}
}