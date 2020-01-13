#include <stdio.h>
#include<math.h>
int main(void) {
	int a;
	scanf("%d", &a);
	for (int i = 0; i <= a; i++)
		printf("%d ", (int)pow(2, i));
	return 0;
}