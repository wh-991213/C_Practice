#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main1001()
{
	//��������ʹ���ۼƳ˷��Ļ����ϣ�ͨ����λ���㣨 << ��ʵ��2��n�η��ļ��㡣
	//�༶���룬ÿһ����������n(0<=n<31)

	//1
	//00000001 - 1<<0 = 1
	//00000010 - 1<<1 = 2
	//00000100 - 1<<2 = 4
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		printf("%d\n", 1 << n);
	}
	return 0;
}