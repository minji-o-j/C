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
https://korbillgates.tistory.com/100 참조링크

#include <time.h>
time_t t = time(NULL);
struct tm tm = *localtime(&t);


struct tm {
   int tm_sec;         // 초,  range 0 to 59             
int tm_min;         // 분, range 0 to 59              
int tm_hour;        // 시간, range 0 to 23             
int tm_mday;        // 일, range 1 to 31              
int tm_mon;         // 월, range 0 to 11              
int tm_year;        // 1900년 부터의 년                 
int tm_wday;        // 요일, range 일(0) to 토(6)       
int tm_yday;        // 1년 중 경과 일, range 0 to 365   
int tm_isdst;       // 써머타임                        
};


출처: https://korbillgates.tistory.com/100 [생물정보학자의 블로그]

*/