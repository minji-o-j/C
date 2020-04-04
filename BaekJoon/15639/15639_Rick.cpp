#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[100];
	gets_s(str);

	if (!strcmp("Give you up", str))
		printf("NO");
	else if (!strcmp("Let you down", str))
		printf("NO");
	else if (!strcmp("Run around and desert you", str))
		printf("NO");
	else if (!strcmp("Make you cry", str))
		printf("NO");
	else if (!strcmp("Say goodbye", str))
		printf("NO");
	else if (!strcmp("Tell a lie and hurt you", str))
		printf("NO");

	else
		printf("YES");

}