#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
is_left_move(char* str1, char* str2)
{
	//1.��str1�ַ�����׷��һ��str1�ַ��� - �����������⺯������ʹ��,����ͷ�ļ�<string.h>
	//strcat - �Լ����ܸ��Լ�׷��
	//strcat(str1, str1); - err
	//strncat - ���Թ涨׷�Ӽ����ַ� 
	strncat(str1, str1, 6);

	//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ� - ����ʹ�õĿ⺯������ͷ�ļ�<string.h>
	//strstr - ���Ӵ�
	//(abcdefabcdef,cdefab)����ҵ��˾ͷ���c�ĵ�ַ�����򷵻�һ����ָ��
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
//�������涨�������ַ�������arr1����ַ���������׷��һ��arr1�����ж�arr2�Ƿ���arr1���Ӵ�
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



