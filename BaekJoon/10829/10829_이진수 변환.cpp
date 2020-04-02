#include <stdio.h>
#include <stdlib.h>
#include <math.h>
unsigned long long* binary(unsigned long long n,int cnt,unsigned long long num[])
{
	unsigned long long q = n;
	//unsigned long long*num = (unsigned long long*)calloc(cnt,sizeof(unsigned long long));
	for (int i = 0; i < cnt; i++)
	{
		if (q % (unsigned long long)pow(2, i + 1) != 0)
		{
			num[cnt-1-i]=1;
			q = q - q % (unsigned long long)pow(2, i + 1);

		}

	}
	return num;
}
int main(void)
{
	unsigned long long j;
	scanf_s("%llu", &j);
	unsigned long long k = j;
	int cnt = 1;
	while (k / 2 != 0)
	{
		k = k / 2;
		cnt++;
	}
	unsigned long long*arr = (unsigned long long*)calloc(cnt, sizeof(unsigned long long));
	
	binary(j, cnt, arr);
	for(int z=0;z<cnt;z++)
	{
		printf("%lld", arr[z]);
	}
}

//#include <stdio.h>
//#include <math.h>
//double binary(int n)
//{
//	int k = n;
//	int q = n;
//	//int cnt = 1;
//	double num = 0;
//	while (k / 2 != 0)
//	{
//		k = k / 2;
//		cnt++;
//	}
//	for (int i = 0; i < cnt; i++)
//	{
//		if (q % (int)pow(2, i + 1) != 0)
//		{
//			num += 1 * (int)pow(10, i);
//			q = q - q % (int)pow(2, i + 1);
//			
//		}
//
//	}
//	return num;
//}
//int main(void)
//{
//	int j;
//	scanf_s("%d", &j);
//
//	printf("%d", (int)binary(j));
//
//}