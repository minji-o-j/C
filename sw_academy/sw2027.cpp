#include <stdio.h>
int main(void) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j<i; j++)
			printf("+");
		printf("#");
		for (int k = 4-i; k >0; k--)
			printf("+");
		printf("\n");
	}
	return 0;
}