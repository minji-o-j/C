#include <stdio.h>
int main(void)
{
	int ans = 0;
	int C, K, P = 0;	//�����̰� ������ ���� ���, �������� ����� ���� ����, �������� �����ߵ� ����
	scanf_s("%d %d %d", &C, &K, &P);
	for (int i = 1; i <= C; i++)
	{
		ans += (K*i) + P * i*i;
	}
	printf("%d",ans);
}