#include <stdio.h>

//셸정렬 함수
void inc_insertion_sort(int list[], int first, int last, int gap)
{
	int i, j, key;
	for (i = first + gap; i <= last; i = i + gap) {
		key = list[i];
		for (j = i - gap; j >= first && key < list[j]; j = j - gap)
			list[j + gap] = list[j];
		list[j + gap] = key;
	}
}
//
void shell_sort(int list[], int n)   // n = size
{
	int i, gap;
	for (gap = 1; gap <= n / 9; gap = 3 * gap + 1); 
	while (gap > 0) {
		for (i = 0; i < gap; i++)
			inc_insertion_sort(list, i, n - 1, gap);
		gap /= 3;
	}
}


int main(void)
{
	int dwarf[9];
	int sum2 = 0;
	int sum9 = 0;
	int fake_dwarf[2];
	
	//받음
	for (int i = 0; i < 9; i++)
	{
		scanf_s("%d", &dwarf[i]);
		sum9 += dwarf[i];
	}

	sum2 = sum9 - 100;

	//정렬
	shell_sort(dwarf, 9);

	for (int i = 0; i < 9; i++)
	{
		for (int j = i+1; j < 9; j++)
		{
			if (dwarf[i] + dwarf[j] == sum2)
			{
				fake_dwarf[0] = i;
				fake_dwarf[1] = j;
			}
		}
	}

	for (int t = 0; t < 9; t++)
	{
		if (t != fake_dwarf[0] && t != fake_dwarf[1])
		{
			printf("%d\n", dwarf[t]);
		}
	}
}