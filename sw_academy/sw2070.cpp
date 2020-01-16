#include <stdio.h>
int main(void) 
{
	int num;
	int a;
	int b;
	char c;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%d %d", &a, &b);
		if (a > b)
			c = '>';
		if(a==b)
			c='=';
		if (a < b)
			c = '<';
		printf("#%d %c\n", i+1, c);
	}
}