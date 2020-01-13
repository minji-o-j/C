#include <stdio.h>
int main(void) {
	char a[200];
	scanf("%s", a);
	for (int i = 0;a[i];i++) {
		printf("%d ", (int)a[i] - 64);
	}
	return 0;
}