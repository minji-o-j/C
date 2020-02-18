#include <stdio.h>
int main(void)
{
	int ban;
	int a[5];
	int count = 0;
	scanf_s("%d", &ban);
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &a[i]);
		if (a[i] == ban)
		{
			count++;
		}
	}
	printf("%d", count);
}