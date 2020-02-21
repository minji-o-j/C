#include <stdio.h>
int main(void)
{
	int n, x,t;
	scanf_s("%d %d", &n, &x);

	getchar();//ฐ๘น้
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &t);
		if (t < x)
		{
			printf("%d ", t);
		}
		getchar();
	}
}