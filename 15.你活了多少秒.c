#include<stdio.h>
#pragma warning(disable:4996)
//题述：一年约有3.156×10^7s，要求输入您的年龄，显示该年龄活了多少秒。
int main()
{
	int age = 0;
	scanf("%d", &age);
	//int sec = age * 31560000;//int的最大值是2^32-1 - 可能会造成数值溢出
	long long sec = age * 3.156e7;//e7 - 10^7
	printf("你已经活了%lld秒\n", sec);
	return 0;
}
