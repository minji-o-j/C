#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[111];
	while(scanf("%[^\n]\n", str)!=EOF)
	// %[^'����']s�� ���ڸ� ������ ��� ���ڸ� �޴´�.
	// %['����']�� '����'�� �޴´�.
	//���� %[a-z]: �ҹ��ڸ� �޴´�
	//%[123] %[1-3]: 1,2,3�� �޴´�.
	{
		printf("%s\n", str);
	}
	
}
