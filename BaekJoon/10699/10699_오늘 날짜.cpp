#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
int main(void)
{
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);

	printf("%d-%.2d-%d",1900+tm.tm_year,tm.tm_mon+1,tm.tm_mday);
}

/*
https://korbillgates.tistory.com/100 ������ũ

#include <time.h>
time_t t = time(NULL);
struct tm tm = *localtime(&t);


struct tm {
   int tm_sec;         // ��,  range 0 to 59             
int tm_min;         // ��, range 0 to 59              
int tm_hour;        // �ð�, range 0 to 23             
int tm_mday;        // ��, range 1 to 31              
int tm_mon;         // ��, range 0 to 11              
int tm_year;        // 1900�� ������ ��                 
int tm_wday;        // ����, range ��(0) to ��(6)       
int tm_yday;        // 1�� �� ��� ��, range 0 to 365   
int tm_isdst;       // ���Ÿ��                        
};


��ó: https://korbillgates.tistory.com/100 [�������������� ��α�]

*/