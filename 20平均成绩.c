#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�������Ӽ�������5��ѧ���ĳɼ����������������ǵ�ƽ���ɼ���������������һλС������
//����������һ�У���������5����������Χ0~100�����ÿո�ָ���
//���������һ�У����5������ƽ����������һλС������
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

