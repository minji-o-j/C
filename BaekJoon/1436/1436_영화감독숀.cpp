#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

int main(void) {
	int input;
	int a[10000];
	int ap = 0;

	for (int i = 0; i < 9999666&&ap<=9999; i++)
	{
		char b[8];
		sprintf(b, "%d", i);
		char *ptr = strstr(b, "666");

		if(ptr != NULL) {
			a[ap] = i;
			ap++;
		}
		
	}

	scanf_s("%d", &input);

	printf("%d", a[input-1]);
}