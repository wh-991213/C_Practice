#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main1001()
{
	//题述：不使用累计乘法的基础上，通过移位运算（ << ）实现2的n次方的计算。
	//多级输入，每一行输入整数n(0<=n<31)

	//1
	//00000001 - 1<<0 = 1
	//00000010 - 1<<1 = 2
	//00000100 - 1<<2 = 4
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		printf("%d\n", 1 << n);
	}
	return 0;
}