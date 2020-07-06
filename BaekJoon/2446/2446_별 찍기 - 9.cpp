#include <stdio.h>
int main(void)
{
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < 2 * n-1; i++)
	{
		//À­ºÎºÐ
		if (i+1 <= n)
		{
			//¿ÞÂÊ°ø¹é
			for (int k=0;k<i;k++)
			{
				printf(" ");
			}

			//º°
			for (int s=0;s<2*(n-i)-1;s++)
			{
				printf("*");
			}


		}

		//¾Æ·§ºÎºÐ
		else
		{
			//¿ÞÂÊ °ø¹é
			for (int q=1;q<2*n-i-1;q++)
			{
				printf(" ");
			}
			//º°
			for (int s = 0; s < 2 * (i+1-n)+1; s++)
			{
				printf("*");
			}

		}
		printf("\n");

	}
}