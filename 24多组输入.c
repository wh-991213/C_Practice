#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��������˵����140�����߳�Ϊ��ţ�KiKi��֪�����Լ��ǲ�����ţ����������жϡ�
//����һ��������ʾһ���˵����̣�������ڵ���140�����������һ����ţ������Genius����
int main0201()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)//scanf����ȡʧ����᷵��-1:EOF
	{
		if (n >= 140)
			printf("Genius\n");
	}
	return 0;
}

int main2402()
{
	int n = 0;
	while (~scanf("%d", &n))//~��λȡ�� - �����ȡʧ���� ~-1 -> 0 
	{
		if (n >= 140)
			printf("Genius\n");
	}
	return 0;
}