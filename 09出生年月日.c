#include<stdio.h>
#pragma warning(disable:4996)
int main0901()
{
	//题述：
	//输入描述：输入只有一行，出生日期，包括年月日，年月日之间的数字没有分隔符
	//输出描述：三行，第一行为出生年份，第二行为出生月份，第三行为出生日期。输出时如果月份或天数为1位数，需要在1位数前面补0
	int year = 0;
	int month = 0;
	int day = 0;
	printf("请输入你的出生年月日:");
	scanf("%4d%2d%2d",&year, &month, &day);
	printf("year=%d\n", year);
	printf("month=%02d\n", month);
	printf("day=%02d\n", day);
	return 0;
}
