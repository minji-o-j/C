#include <stdio.h>
int main(void)
{
	char s[50];
	gets_s(s);
	printf("%s?\?!",s);
}
//Trigraph c++17 이전이면 참조해야함
//https://docs.microsoft.com/en-us/cpp/c-language/trigraphs?redirectedfrom=MSDN&view=vs-2019
/*
Trigraph	Punctuation Character
??=					#
??(					[
??/					\
??)					]
??'					^
??<					{
??!					|
??>					}
??-					~

*/