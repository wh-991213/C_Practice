#include<stdio.h>
#pragma warning(disable:4996)
//题述：输入一个十六进制数a，和一个八进制数b，输出a+b的十进制结果（范围-231~231-1）。
//输入描述：一行，一个十六进制数a，和一个八进制数b，中间间隔一个空格。
//输出描述：一行，a+b的十进制结果。
int main2101()
{
	int a, b = 0;
	scanf("%x %o", &a, &b);
	printf("%d\n", a + b);
	return 0;
}