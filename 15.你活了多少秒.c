#include<stdio.h>
#pragma warning(disable:4996)
//������һ��Լ��3.156��10^7s��Ҫ�������������䣬��ʾ��������˶����롣
int main()
{
	int age = 0;
	scanf("%d", &age);
	//int sec = age * 31560000;//int�����ֵ��2^32-1 - ���ܻ������ֵ���
	long long sec = age * 3.156e7;//e7 - 10^7
	printf("���Ѿ�����%lld��\n", sec);
	return 0;
}
