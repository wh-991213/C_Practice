#include<stdio.h>
#pragma warning(disable:4996)
//������KiKi��֪���Ѿ�������������a��b��c�ܷ񹹳������Σ�����ܹ��������Σ��ж������ε����ͣ��ȱ������Ρ����������λ���ͨ�����Σ���
//���������������������ݣ�ÿһ����������a��b��c(0<a,b,c<1000)����Ϊ�����ε������ߣ��ÿո�ָ���
//������������ÿ���������ݣ����ռһ�У�����ܹ��������Σ��ȱ��������������Equilateral triangle!���������������������Isosceles triangle!����������������������Ordinary triangle!������֮�����Not a triangle!����
int main2901()
{
	int a, b, c = 0;
	while (~(scanf("%d %d %d", &a, &b, &c)))
	{
		if (a + b > c && a + c > b && c + b > a)
		{
			//������ - ����֮�ʹ��ڵ�����||����֮��С�ڵ�����
			if (a == b && b == c)
			{
				//�ȱ�������
				printf("Equilateral triangle!\n");
			}
			else if (a == b && a != c || a == c && a != b || b == c && b != a)
			{
				//����������
				printf("Isosceles triangle!\n");
			}
			else
			{
				//����������
				printf("Ordinary triangle!\n");
			}
		}
		else
		{
			//����������
			printf("Not a triangle!\n");
		}
	}
	return 0;
}