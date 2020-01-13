#include <stdio.h>
int main(void) 
{
	int a;
	scanf_s("%d", &a);
	for (int i = 0; i < a; i++)
		printf("#");
	return 0;
}