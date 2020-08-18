#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int mod(char *S, int p)//문자열 S가 p로 나누어지는지 확인하기 위한 함수, 우리가 큰 수 나눗셈 할때 하는 방식과 같음.
{
	// S는 수를 문자열로 표현한 것, 1234 -> "1234"
	int find= 0;
	for (int i = 0; S[i]; i++)//S의 index 범위에 벗어나면 종료
		find= (find* 10 + (S[i] - '0')) % p;
	return find;
}

int main(void)
{
	char k[102];
	int l;
	scanf("%s", k);
	scanf("%d", &l);
	int*check = (int*)calloc(sizeof(int), l + 1);//0으로 초기화된 배열 check
	
	int a = -1;
	
	//에라토스테네스의 체, 소수인 수에는 0이 마지막까지 남아있다.
	check[0] = -1;
	check[1] = -1;
	for (int i = 2; i <= l; i++) {
		if (check[i] == 0) {
			for (int j = i * 2; j <= l; j += i) {
				check[j] = 1;//소수가 아님을 표시
			}
		}
	}

	//두 소수의 곱으로 이루어진 k, 뭘로 구성되었는가 확인
	for (int i = 2; i < l; i++)	//
	{
		int t = mod(k, i);
		if (t == 0 && check[i] == 0)//입력 숫자가 l 미만의 수 i로 나누어짐&&i가 소수임
		{
			a = i;
			printf("BAD %d", a);
			free(check);
			return 0;
		}
	}
	printf("GOOD");

	free(check);
	return 0;
}