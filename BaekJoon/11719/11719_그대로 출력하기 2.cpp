#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[101];
	int t;

	while (1)
	{
		t = scanf("%[^\n]", &str);
		getchar(); //%[^\n]]\n하면 안되었던 이유는 \n이전까지만 scanf가 받았기 때문에 \n은 인식이 안되었다.

		if (t == -1)
		{
			break;
		}
		if (t != 0)
		{
			printf("%s\n", str);
		}
		else
		{
			printf("\n");
		}
	}
}
