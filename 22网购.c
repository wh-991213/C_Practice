#define _CRT_SECURE_NO_WARNINIGS
#include<stdio.h>
#pragma warning(disable:4996)
//������KiKi�ǳ�ϲ����������һ�ҵ�����������һ���·������˽⵽����������ǡ�˫11����11��11�գ�������·���7�ۣ�
//��˫12�� ��12��12�գ�������·���8�ۣ�������Ż�ȯ���Զ����50Ԫ���Ż�ȯֻ����˫11��˫12ʹ�ã�����KiKi����������Ǯ����
//����������һ�У��ĸ����֣���һ������ʾС�����е��·��۸񣬵ڶ��͵����������ֱ��ʾ������·ݡ���������ڡ����ĸ���
//����ʾ�Ƿ����Ż�ȯ�����Ż�ȯ��1��ʾ�����Ż�ȯ��0��ʾ����
//���������һ�У�С��ʵ�ʻ���Ǯ����������λС����������ʾ����Ҫָ���̼ҵ�����Ǯ��
int main2201()
{
	float price = 0.0;
	int month = 0;
	int day = 0;
	int flag = 0;
	scanf("%f %d %d %d", &price, &month, &day, &flag);
	if (month == 11 && day == 11)
	{
		price *= 0.7;
		if (flag == 1)
		{
			price -= 50;
		}
	}
	if (month == 12 && day == 12)
	{
		price *= 0.8;
		if (flag == 1)
		{
			price -= 50;
		}
	}
	if (price < 0.0)
		price = 0.0;
	printf("%.2f\n", price);
	return 0;
}

int main2202()
{
	float price = 0.0;
	int month = 0;
	int day = 0;
	int flag = 0;
	float cut = 1.0;
	scanf("%f %d %d %d", &price, &month, &day, &flag);
	if (month == 11 && day == 11)
	{
		cut = 0.7;
	}
	else if (month == 12 && day == 12)
	{
		cut = 0.8;
	}
	price = price * cut - flag * 50;
	if (price < 0.0)
		price = 0.0;
	printf("%.2f\n", price);
	return 0;
}