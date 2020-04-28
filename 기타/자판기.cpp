#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	printf("**Menu**\n1. 아메리카노(2500)\n2. 망고 스무디(2000)\n3. 오렌지 쥬스(1500)\n0.종료\n");
	int n;
	char t;
	do
	{
		printf("메뉴를 선택하세요 ");
		scanf("%d", &n);
		if (n == 1)
		{
			printf("아메리카노는 2500원입니다.\n");
			printf("계속 주문하시겠습니까 ? (y / n) ");
			scanf(" %c", &t); //**%c앞에 공백이 있어야한다
		}
		else if (n == 2)
		{
			printf("망고 스무디는 2000원입니다.\n");
			printf("계속 주문하시겠습니까 ? (y / n) ");
			scanf(" %c", &t);
		}
		else if (n == 3)
		{
			printf("오렌지 쥬스는 1500원입니다.\n");
			printf("계속 주문하시겠습니까 ? (y / n) ");
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

	printf("주문 완료하겠습니다. 감사합니다\n");


}