#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//题述：给定秒数seconds (0< seconds < 100,000,000)，把秒转化成小时、分钟和秒。
//输入：一行，包括一个整数，即给定的秒数。
//输出：一行，包含三个整数，依次为输入整数对应的小时数、分钟数和秒数（可能为零），中间用一个空格隔开。
int main1701()
{
	int sec = 0;
	printf("请输入秒数:>");
	scanf("%d", &sec);
	int h = sec / 60 / 60;
	int m = sec / 60 % 60; 
	int s = sec % 60;
	printf("%d %d %d\n", h, m, s);
	return 0;
}