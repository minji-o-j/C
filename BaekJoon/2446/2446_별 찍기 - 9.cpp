#include <stdio.h>
int main(void)
{
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < 2 * n-1; i++)
	{
		//���κ�
		if (i+1 <= n)
		{
			//���ʰ���
			for (int k=0;k<i;k++)
			{
				printf(" ");
			}

			//��
			for (int s=0;s<2*(n-i)-1;s++)
			{
				printf("*");
			}


		}

		//�Ʒ��κ�
		else
		{
			//���� ����
			for (int q=1;q<2*n-i-1;q++)
			{
				printf(" ");
			}
			//��
			for (int s = 0; s < 2 * (i+1-n)+1; s++)
			{
				printf("*");
			}

		}
		printf("\n");

	}
}