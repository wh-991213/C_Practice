#include<stdio.h>
int main1801()
{
	//���������������ֽ����С���ֽ���ĸ�����һ��С�������жϵ�ǰ�������ֽ���
	//��
	//��һ�����ݵĸ��ֽ����ݷŵ��͵�ַ�������ֽ����ݷŵ��ߵ�ַ�������ַ�ʽ��������ֽ���洢ģʽ
	//��һ�����ݵĸ��ֽ����ݷŵ��ߵ�ַ�������ֽ����ݷŵ��͵�ַ�������ַ�ʽ����С���ֽ���洢ģʽ

	//1.
	int a = 1;
	char *p = (char*)&a;
	if (*p == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
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
		printf("С��\n");
	}
	else
	{
		printf("���\n");
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
		printf("С��\n");
	else
		printf("���\n");
	return 0;
}