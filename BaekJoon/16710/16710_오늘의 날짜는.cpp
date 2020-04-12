#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
int main(void)
{
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);

	printf("%d\n%.2d\n%d", 1900 + tm.tm_year, tm.tm_mon + 1, tm.tm_mday);
}