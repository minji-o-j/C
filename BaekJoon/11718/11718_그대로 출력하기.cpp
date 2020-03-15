#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[111];
	while(scanf("%[^\n]\n", str)!=EOF)
	// %[^'문자']s는 문자를 제외한 모든 문자를 받는다.
	// %['문자']는 '문자'만 받는다.
	//예시 %[a-z]: 소문자만 받는다
	//%[123] %[1-3]: 1,2,3만 받는다.
	{
		printf("%s\n", str);
	}
	
}
