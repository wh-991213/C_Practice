#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��������������seconds (0< seconds < 100,000,000)������ת����Сʱ�����Ӻ��롣
//���룺һ�У�����һ����������������������
//�����һ�У�������������������Ϊ����������Ӧ��Сʱ����������������������Ϊ�㣩���м���һ���ո������
int main1701()
{
	int sec = 0;
	printf("����������:>");
	scanf("%d", &sec);
	int h = sec / 60 / 60;
	int m = sec / 60 % 60; 
	int s = sec % 60;
	printf("%d %d %d\n", h, m, s);
	return 0;
}