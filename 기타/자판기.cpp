#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	printf("**Menu**\n1. �Ƹ޸�ī��(2500)\n2. ���� ������(2000)\n3. ������ �꽺(1500)\n0.����\n");
	int n;
	char t;
	do
	{
		printf("�޴��� �����ϼ��� ");
		scanf("%d", &n);
		if (n == 1)
		{
			printf("�Ƹ޸�ī��� 2500���Դϴ�.\n");
			printf("��� �ֹ��Ͻðڽ��ϱ� ? (y / n) ");
			scanf(" %c", &t); //**%c�տ� ������ �־���Ѵ�
		}
		else if (n == 2)
		{
			printf("���� ������� 2000���Դϴ�.\n");
			printf("��� �ֹ��Ͻðڽ��ϱ� ? (y / n) ");
			scanf(" %c", &t);
		}
		else if (n == 3)
		{
			printf("������ �꽺�� 1500���Դϴ�.\n");
			printf("��� �ֹ��Ͻðڽ��ϱ� ? (y / n) ");
			scanf(" %c", &t);
		}
		else if (n == 0)
		{
			
			break;
		}
		else
		{
			break;
		}
	} while (t=='y');

	printf("�ֹ� �Ϸ��ϰڽ��ϴ�. �����մϴ�\n");


}