#include <stdio.h>

int findLeast(int k3, int k5, int n)
{
	int n53[2] = { -1,0 };
	for (int i = 0; i <= k5; i++)
	{
		for (int j = 0; j < k3; j++)
		{
			if ((n - (k5 - i) * 5) % 3 == 0)
			{
				n53[0] = k5 - i;//5개수
				n53[1] = (n - (k5 - i) * 5) / 3;//3개수
				return n53[0] + n53[1];
				
			}
		}
	}
	return n53[0]+n53[1];
}

int main(void)
{

	int n;
	scanf_s("%d", &n);
	int k5 = n / 5;
	int k3 = n / 3;
	printf("%d",findLeast(k3,k5,n));

}