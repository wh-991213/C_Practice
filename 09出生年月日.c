#include<stdio.h>
#pragma warning(disable:4996)
int main0901()
{
	//������
	//��������������ֻ��һ�У��������ڣ����������գ�������֮�������û�зָ���
	//������������У���һ��Ϊ������ݣ��ڶ���Ϊ�����·ݣ�������Ϊ�������ڡ����ʱ����·ݻ�����Ϊ1λ������Ҫ��1λ��ǰ�油0
	int year = 0;
	int month = 0;
	int day = 0;
	printf("��������ĳ���������:");
	scanf("%4d%2d%2d",&year, &month, &day);
	printf("year=%d\n", year);
	printf("month=%02d\n", month);
	printf("day=%02d\n", day);
	return 0;
}
