#include <stdio.h>
int main(void)
{
	int n;
	int tf = 1;
	scanf_s("%d", &n);

	for (int i = 2; i < n; i++)
	{
		if (n%i == 0)
			tf = 0;
	}

	if (tf == 1)
	{
		printf("Yes");
	}
	else if (tf == 0)
	{
		printf("No");
	}
	else
		printf("error");
}