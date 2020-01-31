#include <stdio.h>
int main(void) {
	int H, M = 0;
	scanf_s("%d %d", &H, &M);
	M -= 45;
	if (M < 0) {
		H -= 1;
		M += 60;
		if (H < 0)
		{
			H += 24;
		}
	}
	printf("%d %d", H, M);
}