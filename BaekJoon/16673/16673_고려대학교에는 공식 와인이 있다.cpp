#include <stdio.h>
int main(void)
{
	int ans = 0;
	int C, K, P = 0;	//수빈이가 와인을 모은 년수, 수빈이의 고려대 애착 정도, 수빈이의 구매중독 정도
	scanf_s("%d %d %d", &C, &K, &P);
	for (int i = 1; i <= C; i++)
	{
		ans += (K*i) + P * i*i;
	}
	printf("%d",ans);
}