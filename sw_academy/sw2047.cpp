#include <stdio.h>
int main(void)
{
	//int a[80];
	char a[80];
	int i;
	scanf_s("%s", &a);  //문자열로 받아야함
	for (i = 0; a[i]; i++) {
		//if (a[i] >= 97 && a[i] <= 122)
		//	a[i] -= 32;
		if ('a' <= a[i] && a[i] <= 'z') {
			a[i] = a[i] - 'a' + 'A';
			}
	}
	for (i = 0;a[i]; i++) {
		printf("%c", a[i]);
	}
	return 0;
}