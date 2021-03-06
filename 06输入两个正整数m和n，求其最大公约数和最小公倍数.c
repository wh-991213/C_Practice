#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//题述：输入两个正整数m和n，求其最大公约数和最小公倍数。
//最大公约数：指两个整数共有约数中最大的一个
//最小公倍数：指两个整数共有倍数中最小的一个
int main0601()
{
	//思路：
	//最大公约数："欧几里得算法"俗称辗转相除法  
	/*
		eg:求20和15的最大公约数
		20/15 = 1 ...5
		 15/5 = 3 ...0
	以除数和余数循环做除法运算，当余数为0时，取当前算式除数为最大公约数
	所以20和15的最大公约数是5 

	最小公倍数：取两数之积除以两数的最大公约数
	20*15/5=60 - 所以20和15的最小公倍数是60
	*/
	int m, n;
	int temp,ret;
	int j, k;
	int p;
	printf("请输入两个正整数\n");
	scanf("%d%d", &m, &n);
	if (m < n)//保证输入的两个数中的那个较大值永远是m
	{
		temp = m;
		m = n;
		n = temp;
	}
	//这里将输入的m和n各备份一份 - 为了后面输出
	j = m;
	k = n;
	
	p = m * n;//取两数积
	while (n != 0)//因为最后是把余数赋值n - 所以使用n!=0 - 也就是余数做为循环条件
	{
		ret = m % n;
		m = n;
		n = ret;
	}
	printf("%d和%d的最大公约数是%d\n", j, k, m);
	printf("%d和%d的最小公倍数是%d\n", j, k, p/m);
	
	return 0;
}
