#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int init;
		int diff = 0;
		int dw = 0;
		int db = 0;
		//char arr1[1000001] = { 0, };//현재
		//char arr2[1000001] = { 0, };//원하는 상태

		scanf("%d", &init);
		char* arr1 = (char*)calloc(sizeof(char), init+1);
		char* arr2 = (char*)calloc(sizeof(char), init+1);
		scanf("%s", arr1);
		scanf("%s", arr2);


		for (int k = 0; k < init; k++)
		{
			if (arr1[k] != arr2[k])
			{
				diff++;
				if (arr1[k] == 'W')
					dw++;
				else
					db++;
			}
		}
		printf("%d\n", diff - (dw <= db ? dw : db));
		free(arr1);
		free(arr2);
	}
	
}