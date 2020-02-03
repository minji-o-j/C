#include <stdio.h>
int main(void)
{
	int score = 0;
	char ps = 0;
	scanf_s("%d", &score);
	if(score>=90)
	{
		ps = 'A';
	}
	else if (score >= 80)
	{
		ps = 'B';
	}
	else if (score >= 70)
	{
		ps = 'C';
	}
	else if (score >= 60)
	{
		ps = 'D';
	}
	else
	{
		ps = 'F';
	}
	printf("%c", ps);
}