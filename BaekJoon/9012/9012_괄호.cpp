#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	int start;
	int top;
	scanf("%d",&n);

	for (int i = 0; i < n; i++)
	{
		int stack[51] = { 0, };
		char arr[51] = { 0, };
		start = 0;
		top = -1;

		scanf("%s", arr);

		while (arr[start] != 0)
		{
			if (arr[start] == '(')
			{
				arr[top + 1] = 1;
				top++;
			}
			else if (arr[start] == ')')
			{
				if (top == -1)
				{
					top--;
					break;
				}
				else{
					arr[top] = 0;
					top--;
				}
				
			}
			start++;
		}
		if (top == -1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	
	
}