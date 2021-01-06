#include<stdio.h>
int main1801()
{
	//题述：请简述大端字节序和小端字节序的概念，设计一个小程序来判断当前机器的字节序
	//答：
	//把一个数据的高字节内容放到低地址处，低字节内容放到高地址处，这种方式叫做大端字节序存储模式
	//把一个数据的高字节内容放到高地址处，低字节内容放到低地址处，这种方式叫做小端字节序存储模式

	//1.
	int a = 1;
	char *p = (char*)&a;
	if (*p == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}

int check_sys()
{
	int a = 1;
	/*char *p = (char*)&a;
	return *p;*/
	//  ||   ||
	return *(char*)&a;
}
//2.
int main1802()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}

int check_sys1()
{
	union
	{
		char c;
		int i;
	}u;
	// c/i i i i
	u.i = 1;
	return u.c;
}
//3.
int main1803()
{
	int ret = check_sys1();
	if (1 == ret)
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}