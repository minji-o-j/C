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
		getchar(); //%[^\n]]\n�ϸ� �ȵǾ��� ������ \n���������� scanf�� �޾ұ� ������ \n�� �ν��� �ȵǾ���.

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
