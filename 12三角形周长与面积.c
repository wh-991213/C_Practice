#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
//���������ݸ�����������3����a, b, c��0 < a, b, c < 100,000�������������ε��ܳ��������
//����������һ�У�������3���ߣ��ܹ��������Σ����м���һ���ո������
//���������һ�У��������ܳ��������������λС�������м���һ���ո���� - circumference=9.00 area=3.90��
int main1201()
{
	int a, b, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	double p = (a + b + c) / 2.0;
	//�ܳ�
	double circumference = a + b + c;
	//��� - ���׹�ʽ��
	//����ƽ���ڣ���һ�������Σ��߳��ֱ�Ϊa��b��c�������ε����S�������¹�ʽ�����
	//S = sqrt(p(p-a)(p-b)(p-c))
	//p = (a+b+c)/2 - pΪ�ܳ���һ��
	double area = sqrt(p*(p - a)*(p - b)*(p - c));
	printf("circumference=%.2lf area=%.2lf\n", circumference, area);
	return 0;
}