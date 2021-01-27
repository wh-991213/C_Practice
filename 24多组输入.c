#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//题述：据说智商140以上者称为天才，KiKi想知道他自己是不是天才，请帮他编程判断。
//输入一个整数表示一个人的智商，如果大于等于140，则表明他是一个天才，输出“Genius”。
int main0201()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)//scanf若读取失败则会返回-1:EOF
	{
		if (n >= 140)
			printf("Genius\n");
	}
	return 0;
}

int main2402()
{
	int n = 0;
	while (~scanf("%d", &n))//~按位取反 - 如果读取失败则 ~-1 -> 0 
	{
		if (n >= 140)
			printf("Genius\n");
	}
	return 0;
}