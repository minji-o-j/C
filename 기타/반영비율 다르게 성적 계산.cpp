#include <stdio.h>
int main(void)
{
	int midterm[][3] = { {90,80,90}, //영희 국영수 중간
						{70,100,100},//철수 국영수 중간
						{80,90,90} };//미나 국영수 중간

	int final[][3] = { {80,90,100},//영희 국영수 기말
					{70,90,90},//철수 국영수 기말
					{80,100,80} };//미나 국영수 기말


	printf("<학생별 평균 구하기>\n");
	printf("1. 영희의 전체 평균은 %.2f이다.\n", (((double)(midterm[0][0] + midterm[0][1] + midterm[0][2]) / 3 * 4) + (double)(final[0][0] + final[0][1] + final[0][2]) / 3 * 6) / 10);
	printf("2. 철수의 전체 평균은 %.2f이다.\n", (((double)(midterm[1][0] + midterm[1][1] + midterm[1][2]) / 3 * 4) + (double)(final[1][0] + final[1][1] + final[1][2]) / 3 * 6) / 10);
	printf("3. 미나의 전체 평균은 %.2f이다.\n", (((double)(midterm[2][0] + midterm[2][1] + midterm[2][2]) / 3 * 4) + (double)(final[2][0] + final[2][1] + final[2][2]) / 3 * 6) / 10);
	printf("---------------------------------\n");
	printf("<과목별 평균 구하기>\n");
	printf("1. 국어 과목의 전체 평균은 %.2f이다.\n", (((double)(midterm[0][0] + midterm[1][0] + midterm[2][0]) / 3 * 4) + (double)(final[0][0] + final[1][0] + final[2][0]) / 3 * 6) / 10);
	printf("2. 수학 과목의 전체 평균은 %.2f이다.\n", (((double)(midterm[0][1] + midterm[1][1] + midterm[2][1]) / 3 * 4) + (double)(final[0][1] + final[1][1] + final[2][1]) / 3 * 6) / 10);
	printf("3. 영어 과목의 전체 평균은 %.2f이다.\n", (((double)(midterm[0][2] + midterm[1][2] + midterm[2][2]) / 3 * 4) + (double)(final[0][2] + final[1][2] + final[2][2]) / 3 * 6) / 10);
}