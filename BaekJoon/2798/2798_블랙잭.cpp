#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int N, M;
	int sum = 0;
	scanf_s("%d %d", &N, &M);
	int* CARD = (int*)malloc(sizeof(int)*N);

	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &CARD[i]);
	}

	for (int p = 0; p <N; p++)
	{
		for (int q = 0; q < N; q++)
		{
			for (int r = 0; r < N; r++)
			{
				if (r != q && r != p && p != q)
				{
					int pqrSum = CARD[p] + CARD[q] + CARD[r];
					if ((pqrSum <= M) && ((M - pqrSum) < (M - sum)))
					{
						sum = pqrSum;
					}
				}
			}
		}
	}
	printf("%d", sum);
	free(CARD);
}