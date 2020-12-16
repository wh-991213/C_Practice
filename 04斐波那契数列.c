#include<stdio.h>

int Print(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return Print(n - 1) + Print(n - 2);
}
//题述：数列1, 1, 2, 3, 5, 8, 13, 21...
//请根据数列找出规律，并用程序输出前20项的值。每行输出2项，中间用逗号分隔，并采用左对齐输出。
//这样的数列称为斐波那契数列：前两项之和等于这个数
int main0401()
{
	int i;
	printf("前20项斐波那契数是：\n");
	for ( i = 1; i <=20; i++)
	{
		printf("=====%-5d=====\n", Print(i));
	}
	return 0;
}
