#include <stdio.h>
int main(void)
{
	int midterm[][3] = { {90,80,90}, //���� ������ �߰�
						{70,100,100},//ö�� ������ �߰�
						{80,90,90} };//�̳� ������ �߰�

	int final[][3] = { {80,90,100},//���� ������ �⸻
					{70,90,90},//ö�� ������ �⸻
					{80,100,80} };//�̳� ������ �⸻


	printf("<�л��� ��� ���ϱ�>\n");
	printf("1. ������ ��ü ����� %.2f�̴�.\n", (((double)(midterm[0][0] + midterm[0][1] + midterm[0][2]) / 3 * 4) + (double)(final[0][0] + final[0][1] + final[0][2]) / 3 * 6) / 10);
	printf("2. ö���� ��ü ����� %.2f�̴�.\n", (((double)(midterm[1][0] + midterm[1][1] + midterm[1][2]) / 3 * 4) + (double)(final[1][0] + final[1][1] + final[1][2]) / 3 * 6) / 10);
	printf("3. �̳��� ��ü ����� %.2f�̴�.\n", (((double)(midterm[2][0] + midterm[2][1] + midterm[2][2]) / 3 * 4) + (double)(final[2][0] + final[2][1] + final[2][2]) / 3 * 6) / 10);
	printf("---------------------------------\n");
	printf("<���� ��� ���ϱ�>\n");
	printf("1. ���� ������ ��ü ����� %.2f�̴�.\n", (((double)(midterm[0][0] + midterm[1][0] + midterm[2][0]) / 3 * 4) + (double)(final[0][0] + final[1][0] + final[2][0]) / 3 * 6) / 10);
	printf("2. ���� ������ ��ü ����� %.2f�̴�.\n", (((double)(midterm[0][1] + midterm[1][1] + midterm[2][1]) / 3 * 4) + (double)(final[0][1] + final[1][1] + final[2][1]) / 3 * 6) / 10);
	printf("3. ���� ������ ��ü ����� %.2f�̴�.\n", (((double)(midterm[0][2] + midterm[1][2] + midterm[2][2]) / 3 * 4) + (double)(final[0][2] + final[1][2] + final[2][2]) / 3 * 6) / 10);
}