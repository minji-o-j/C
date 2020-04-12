#include <stdio.h>
int main(void)
{
	int bnb[5];//burger n beverage

	int l = 4500;
	int bu, be = -1;
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &bnb[i]);
	}

	for (int burger = 0; burger < 3; burger++)
	{
		for (int bv = 3; bv < 5; bv++)
		{
			if (bnb[burger] + bnb[bv] < l)
			{
				l = bnb[burger] + bnb[bv];
				bu = burger;
				be = bv;
			}
		}
	}
	printf("%d", bnb[bu] + bnb[be] - 50);
}