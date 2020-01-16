#include <stdio.h>
void main(void) {
	int num;
	scanf_s("%d", &num);
	
	if (num > 9999 || num < 1) 
	{
		return ;
	}
	int n4=num/1000;
	num -= 1000 * n4;
	int n3 = num / 100;
	num -= 100 * n3;
	int n2 = num / 10;
	num -= 10 * n2;
	int n1 = num;
	printf("%d", n4 + n3 + n2 + n1);
}