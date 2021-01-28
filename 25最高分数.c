#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//题述：从键盘任意输入三个整数表示的分数，判断其中的最高分。
//输入描述：多组输入，每行输入包括三个整数表示的分数（0~100），用空格分隔。
//输出描述：针对每行输入，输出为一行，即三个分数中的最高分。
int main2501()
{
	int s1 = 0;
	int s2 = 0;
	int s3 = 0;
	while (~scanf("%d %d %d", &s1, &s2, &s3))
	{
		if (s1 > s2)
		{
			if (s1 > s3)
				printf("%d\n", s1);
			else
				printf("%d\n", s3);
		}
		else
		{
			if (s2 < s3)
				printf("%d\n", s3);
			else
				printf("%d\n", s2);
		}
	}
	return 0;
}

int main2502()
{
	int s1, s2, s3 = 0;
	while (~scanf("%d %d %d", &s1, &s2, &s3))
	{
		int max = 0;//假设较大值
		if (s1 > max)
			max = s1;
		if (s2 > max)
			max = s2;
		if (s3 > max)
			max = s3;
		printf("%d\n", max);
	}
	return 0;
}

int main2503()
{
	int s[3] = { 0 };
	while (~scanf("%d %d %d", &s[0], &s[1], &s[2]))
	{
		int max = 0;
		int i = 0;
		for (i = 0; i < 3; i++)
		{
			if (s[i] > max)
				max = s[i];
		}
		printf("%d\n", max);
	}
	return 0;
}