#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//============================
int main(void)
{
	int arr[10001];
	int top = -1;	
	//top=-1=>empty=1
	char funarr[6] = { 0, };// \0을 생각해서 하나 더 많게할것!!
	int command;

	scanf("%d", &command);

	for (int i = 0; i < command; i++)
	{
		int size = top + 1;
		scanf("%s", funarr);
		if (funarr[0] == 't')//top
		{
			if (top == -1)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", arr[top]);
			}
		}
		else if (funarr[0] == 'e')//empty
		{
			if (top == -1)
			{
				printf("1\n");
			}
			else
			{
				printf("0\n");
			}
		}
		else if (funarr[0] == 's')//size
		{
			printf("%d\n", size);
		}
		else//push or pop
		{
			if (funarr[1]=='u')//push
			{
				int t = 0;
				scanf("%d", &t);
				arr[top+1] = t;
				top++;
			}
			else//pop
			{
				if (size == 0)
				{
					printf("-1\n");
				}
				else
				{
					printf("%d\n", arr[top]);
					top--;
				}
			}
		}
	}
	
}