#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char m1, m2, t1, t2;

int main(void)
{
	scanf("%c %c %c %c", &m1, &m2, &t1, &t2);

	if (m1 == m2)//민성이가 둘다 같은걸 내버린 경우
	{
		if (m1 == 'R') //민성 R, 주먹만 냄
		{
			if ((t1 == 'P') || (t2 == 'P'))	//태경이가 보자기가 있는 경우
			{
				printf("TK");
				return 0;
			}
			else if (t1 == 'S'&&t2 == 'S')	//태경이가 가위만 낸 경우
			{
				printf("MS");
				return 0;
			}
			else
			{
				printf("?");
				return 0;
			}
		}
		else if (m1 == 'S')	//민성 S, 가위만 냄
		{
			if ((t1 == 'R') || (t2 == 'R'))	//태경이가 주먹이 있는 경우
			{
				printf("TK");
				return 0;
			}
			else if (t1 == 'P'&&t2 == 'P')	//태경이가 보자기만 낸 경우
			{
				printf("MS");
				return 0;
			}
			else
			{
				printf("?");
				return 0;
			}
		}
		else //민성 P, 보만 냄
		{
			if ((t1 == 'S') || (t2 == 'S'))	//태경이가 가위가 있는 경우
			{
				printf("TK");
				return 0;
			}
			else if (t1 == 'R'&&t2 == 'R')	//태경이가 주먹만 낸 경우
			{
				printf("MS");
				return 0;
			}
			else
			{
				printf("?");
				return 0;
			}
		}
	}

	//=======
	else if (t1 == t2)//태경이가 둘다 같은걸 내버린 경우
	{
		if (t1 == 'R') //태경 R, 주먹만 냄
		{
			if ((m1 == 'P') || (m2 == 'P'))	//민성이가 보자기가 있는 경우
			{
				printf("MS");
				return 0;
			}
			else if (m1 == 'S'&&m2 == 'S')	//민성이가 가위만 낸 경우
			{
				printf("TK");
				return 0;
			}
			else
			{
				printf("?");
				return 0;
			}
		}
		else if (t1 == 'S')	//태경 S, 가위만 냄
		{
			if ((m1 == 'R') || (m2 == 'R'))	//민성이가 주먹이 있는 경우
			{
				printf("MS");
				return 0;
			}
			else if (m1 == 'P'&&m2 == 'P')	//민성이가 보자기만 낸 경우
			{
				printf("TK");
				return 0;
			}
			else
			{
				printf("?");
				return 0;
			}
		}
		else //태경 P, 보만 냄
		{
			if ((m1 == 'S') || (m2 == 'S'))	//민성이가 가위가 있는 경우
			{
				printf("MS");
				return 0;
			}
			else if (m1 == 'R'&&m2 == 'R')	//민성이가 주먹만 낸 경우
			{
				printf("TK");
				return 0;
			}
			else
			{
				printf("?");
				return 0;
			}
		}
	}
	else
	{
		printf("?");
	}
	return 0;
}