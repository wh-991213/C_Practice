#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
//������KiKi�������ĸ��Сдת������һ���ַ����ж����Ƿ�Ϊ��д��ĸ������ǣ�����ת����Сд��ĸ����֮��ת��Ϊ��д��ĸ��
//�����������������룬ÿһ������һ����ĸ��
//������������ÿ�����룬�������ռһ�У������ĸ�Ķ�Ӧ��ʽ��
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
	//���¼����⺯������ͷ�ļ���<ctype.h>
	//�ж� - ��������򷵻�ture,���򷵻�NULL
	//isalpha:�ж��Ƿ�ΪӢ����ĸ
	//isupper:�ж��Ƿ�Ϊ��дӢ����ĸ
	//islower:�ж��Ƿ�ΪСдӢ����ĸ
	//ת�� - ��дתСд��Сдת��д
	//toupper:Сдת��д
	//tolower:��дתСд
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