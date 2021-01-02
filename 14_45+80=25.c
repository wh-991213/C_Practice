#include<stdio.h>
#pragma warning(disable:4996)
//题述：KiKi今年5岁了，已经能够认识100以内的非负整数，并且并且能够进行 100 以内的非负整数的加法计算。
//不过，BoBo老师发现KiKi在进行大于等于100的正整数的计算时，规则如下：
//1.       只保留该数的最后两位，例如：对KiKi来说1234等价于34
//2.       如果计算结果大于等于 100， 那么KIKI也仅保留计算结果的最后两位，如果此两位中十位为0，则只保留个位。
//例如：45 + 80 = 25
//要求给定非负整数 a和 b，模拟KiKi的运算规则计算出 a + b 的值。
int main1401()
{
	int a, b = 0;
	scanf("%d %d", &a, &b);
	//int ret = (a % 100 + b % 100) % 100; - %100无论是什么数都只取后两位；如果是105也只取5
	//or
	int ret = (a + b) % 100;
	printf("%d+%d=%d", a, b, ret);
	return 0;
}