#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�������Ӽ���������������������ʾ�ķ������ж����е���߷֡�
//�����������������룬ÿ�������������������ʾ�ķ�����0~100�����ÿո�ָ���
//������������ÿ�����룬���Ϊһ�У������������е���߷֡�
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
		int max = 0;//����ϴ�ֵ
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