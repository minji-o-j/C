#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int mod(char *S, int p)//���ڿ� S�� p�� ������������ Ȯ���ϱ� ���� �Լ�, �츮�� ū �� ������ �Ҷ� �ϴ� ��İ� ����.
{
	// S�� ���� ���ڿ��� ǥ���� ��, 1234 -> "1234"
	int find= 0;
	for (int i = 0; S[i]; i++)//S�� index ������ ����� ����
		find= (find* 10 + (S[i] - '0')) % p;
	return find;
}

int main(void)
{
	char k[102];
	int l;
	scanf("%s", k);
	scanf("%d", &l);
	int*check = (int*)calloc(sizeof(int), l + 1);//0���� �ʱ�ȭ�� �迭 check
	
	int a = -1;
	
	//�����佺�׳׽��� ü, �Ҽ��� ������ 0�� ���������� �����ִ�.
	check[0] = -1;
	check[1] = -1;
	for (int i = 2; i <= l; i++) {
		if (check[i] == 0) {
			for (int j = i * 2; j <= l; j += i) {
				check[j] = 1;//�Ҽ��� �ƴ��� ǥ��
			}
		}
	}

	//�� �Ҽ��� ������ �̷���� k, ���� �����Ǿ��°� Ȯ��
	for (int i = 2; i < l; i++)	//
	{
		int t = mod(k, i);
		if (t == 0 && check[i] == 0)//�Է� ���ڰ� l �̸��� �� i�� ��������&&i�� �Ҽ���
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