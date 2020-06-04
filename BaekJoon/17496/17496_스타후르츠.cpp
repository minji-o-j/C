#include <stdio.h>
int main(void)
{
	int n, t, c, p;//여름 일, 스타후르츠 자라는데 걸리는 일, 심을 수 있는 칸, 개당 가격
	scanf_s("%d %d %d %d", &n, &t, &c, &p);
	printf("%d", ((n-1) / t)*c*p);
}