#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//���������ʹ��forѭ��
//ע�⣺ʹ��scanf��getchar��ȡһ���ַ� - ��ȡ���ַ��ǿ��Էŵ�int������ȥ��
//1.���ǻ�ȡ�����ַ� - ÿ���ַ����ж�Ӧ��ASCII��ֵ - ASCII����һ������
//2.getchar������������������һ���ַ��������ص�������ַ���ASCII��ֵ����������ȡʧ��ʱ�����᷵��һ��EOF - end of file ��-1
//3.scanf������������ȡ�����������ص��Ƕ�ȡ����ЧԪ�صĸ�������ȡʧ��ʱ�����᷵��EOF
int main0801()
{
	//*
	//* *
	//* * *
	//* * * *
	//... ... ...
	int n = 0;
	int i, j = 0;
	printf("������һ���ַ�:");
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
	printf("������һ���ַ�:");
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
	printf("������һ���ַ�:");
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
	//��ʽһ��
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
	//��ʽ����
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
			//�۲�1��2
		}
		printf("\n");
	}
	return 0;
}