#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
is_left_move(char* str1, char* str2)
{
	//1.在str1字符串中追加一个str1字符串 - 以下有两个库函数可以使用,所在头文件<string.h>
	//strcat - 自己不能给自己追加
	//strcat(str1, str1); - err
	//strncat - 可以规定追加几个字符 
	strncat(str1, str1, 6);

	//2.判断str2指向的字符串是否是str1指向的字符串的子串 - 以下使用的库函数所在头文件<string.h>
	//strstr - 找子串
	//(abcdefabcdef,cdefab)如果找到了就返回c的地址，否则返回一个空指针
	char* ret = strstr(str1, str2);
	if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
//题述：规定有两个字符串，将arr1这个字符串后面再追加一个arr1，并判断arr2是否是arr1的子串
int main0201()
{
	char arr1[30] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n ");
	}
	return 0;
}



