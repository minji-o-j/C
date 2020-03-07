#include <stdio.h>
#define SWAP(x, y, t) ( (t)=(x), (x)=(y), (y)=(t) )
void sort(int n, int* list)
{
	int i, j, temp;
	for (i = n - 1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (list[j] > list[j + 1])
			{
				SWAP(list[j], list[j + 1], temp);
			}
		}
	}
}
int main(void)
{
	int a[5];
	int sum = 0;
	int mid=0;
	int temp;
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &a[i]);
		sum += a[i];
	}
	sort(5, a);
	printf("%d\n%d", sum / 5, a[2]);
	

}