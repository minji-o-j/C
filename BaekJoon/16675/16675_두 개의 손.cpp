#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char m1, m2, t1, t2;

int main(void)
{
	scanf("%c %c %c %c", &m1, &m2, &t1, &t2);

	if (m1 == m2)//�μ��̰� �Ѵ� ������ ������ ���
	{
		if (m1 == 'R') //�μ� R, �ָԸ� ��
		{
			if ((t1 == 'P') || (t2 == 'P'))	//�°��̰� ���ڱⰡ �ִ� ���
			{
				printf("TK");
				return 0;
			}
			else if (t1 == 'S'&&t2 == 'S')	//�°��̰� ������ �� ���
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
		else if (m1 == 'S')	//�μ� S, ������ ��
		{
			if ((t1 == 'R') || (t2 == 'R'))	//�°��̰� �ָ��� �ִ� ���
			{
				printf("TK");
				return 0;
			}
			else if (t1 == 'P'&&t2 == 'P')	//�°��̰� ���ڱ⸸ �� ���
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
		else //�μ� P, ���� ��
		{
			if ((t1 == 'S') || (t2 == 'S'))	//�°��̰� ������ �ִ� ���
			{
				printf("TK");
				return 0;
			}
			else if (t1 == 'R'&&t2 == 'R')	//�°��̰� �ָԸ� �� ���
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
	else if (t1 == t2)//�°��̰� �Ѵ� ������ ������ ���
	{
		if (t1 == 'R') //�°� R, �ָԸ� ��
		{
			if ((m1 == 'P') || (m2 == 'P'))	//�μ��̰� ���ڱⰡ �ִ� ���
			{
				printf("MS");
				return 0;
			}
			else if (m1 == 'S'&&m2 == 'S')	//�μ��̰� ������ �� ���
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
		else if (t1 == 'S')	//�°� S, ������ ��
		{
			if ((m1 == 'R') || (m2 == 'R'))	//�μ��̰� �ָ��� �ִ� ���
			{
				printf("MS");
				return 0;
			}
			else if (m1 == 'P'&&m2 == 'P')	//�μ��̰� ���ڱ⸸ �� ���
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
		else //�°� P, ���� ��
		{
			if ((m1 == 'S') || (m2 == 'S'))	//�μ��̰� ������ �ִ� ���
			{
				printf("MS");
				return 0;
			}
			else if (m1 == 'R'&&m2 == 'R')	//�μ��̰� �ָԸ� �� ���
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