#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//题述：从键盘输入5个学生的成绩（整数），求他们的平均成绩（浮点数，保留一位小数）。
//输入描述：一行，连续输入5个整数（范围0~100），用空格分隔。
//输出描述：一行，输出5个数的平均数（保留一位小数）。
int main2001()
{
	int i = 0;
	int sum = 0;
	for (i = 0; i < 5; i++)
	{
		int score = 0;
		scanf("%d", &score);
		sum += score;
	}
	printf("%.1f\n", sum / 5.0);
	return 0;
}

int main2002()
{
	int i = 0;
	int sum = 0;
	int score[5] = { 0 };
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
	}
	for (i = 0; i < 5; i++)
	{
		sum += score[i];
	}
	printf("%.1f\n", sum / 5.0);
	return 0;
}

