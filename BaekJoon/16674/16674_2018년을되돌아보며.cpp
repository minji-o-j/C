#include <stdio.h>

int c2, c0, c1, c8, ce= 0;	//2, 0, 1, 8, 이외의 수 캬운트

void countNum(int c)
{
	int check = c;
	
	do {
		if (check % 10 == 2)
			c2++;
		else if (check % 10 == 0)
			c0++;
		else if (check % 10 == 1)
			c1++;
		else if (check % 10 == 8)
			c8++;
		else
			ce++;

		check = check / 10;

	} while (check > 0);
}

int findNum(int n)
{

	countNum(n);
	if (ce == 0)	//관련있는 수
	{
		if (c2 > 0 && c0 > 0 && c1 > 0 && c8 > 0)//밀접한 수
		{
			if ((c2 == c0)&&(c1==c8)&&(c2==c1))	//묶여있는 수
			{
				return 8;
			}

			return 2;
		}
		return 1;
	}
	else
		return 0;	//관련없는 수
	
}

int main(void)
{
	int i = 0;
	scanf_s("%d", &i);
	printf("%d", findNum(i));
	return 0;
}