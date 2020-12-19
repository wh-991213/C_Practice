#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//题述：灵活使用for循环
//注意：使用scanf或getchar获取一个字符 - 获取的字符是可以放到int类型里去的
//1.他们获取的是字符 - 每个字符都有对应的ASCII码值 - ASCII码是一个整数
//2.getchar这个函数如果读到的是一个字符，它返回的是这个字符的ASCII码值；而当它读取失败时，它会返回一个EOF - end of file 即-1
//3.scanf这个函数如果读取正常，它返回的是读取的有效元素的个数；读取失败时，它会返回EOF
int main0801()
{
	//*
	//* *
	//* * *
	//* * * *
	//... ... ...
	int n = 0;
	int i, j = 0;
	printf("请输入一个字符:");
	scanf("%c", &n);
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%c ", n);
		}
		printf("\n");
	}
	return 0;
}

int main0802()
{
	//* * * * * * * * * *
	//* * * * * * * * *
	//* * * * * * * *
	//... ... ... ...
	char n = 0;
	int i, j = 0;
	printf("请输入一个字符:");
	scanf("%c", &n);
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10 - i; j++)
		{
			printf("%c ", n);
		}
		printf("\n");
	}
	return 0;
}
int main0803()
{
	//    *
	//   * *
	//  * * *
	// * * * *
	//* * * * *
	//... ... ...
	//    *

	char n = 0;
	printf("请输入一个字符:");
	scanf("%c", &n);
	int i = 0;
	int j = 0;
	for ( i = 0; i < 10; i++)
	{
		for ( j = 0; j <10-1-i; j++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%c ", n);
		}
		printf("\n");
	}
	//样式一：
	// * * * * * * * * *
	//* * * * * * * * * *
	// * * * * * * * * *
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 9 - i; j++)
		{
			printf("%c ", n);
		}
		printf("\n");
	}
	//样式二：
	//* * * * * * * * * *
	//* * * * * * * * * *
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 10 - i; j++)
		{
			printf("%c ", n);
		}
		printf("\n");
	}
	return 0;
}

int main0804()
{
	int i, j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 10 - i; j++)
		{
			printf("* ");//1
			//or
			//printf("*");//2
			//观察1和2
		}
		printf("\n");
	}
	return 0;
}