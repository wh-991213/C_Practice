#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
//题述：KiKi想完成字母大小写转换，有一个字符，判断它是否为大写字母，如果是，将它转换成小写字母；反之则转换为大写字母。
//输入描述：多组输入，每一行输入一个字母。
//输出描述：针对每组输入，输出单独占一行，输出字母的对应形式。
int main2801()
{
	int ch = 0;
	while (~(ch = getchar()))
	{
		if (ch >= 'A'&&ch <= 'Z')
		{
			printf("%c\n", ch + 32);
		}
		if (ch >= 'a'&&ch <= 'z')
		{
			printf("%c\n", ch - 32);
		}
		getchar();
	}
	
	return 0;
}

int main2802()
{
	int ch = 0;
	//以下几个库函数所在头文件是<ctype.h>
	//判断 - 如果是真则返回ture,否则返回NULL
	//isalpha:判断是否为英文字母
	//isupper:判断是否为大写英文字母
	//islower:判断是否为小写英文字母
	//转换 - 大写转小写；小写转大写
	//toupper:小写转大写
	//tolower:大写转小写
	while (~scanf("%c", &ch))
	{
		if (isupper(ch))
		{
			printf("%c\n", tolower(ch));
		}
		if (islower(ch))
		{
			printf("%c\n", toupper(ch));
		}
	}
	return 0;
}