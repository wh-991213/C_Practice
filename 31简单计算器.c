#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//������ʵ���������ġ��Ӽ��˳������㣬�û��Ӽ���������ʽ��������1�����������2�������㲢������ʽ��ֵ����������������Ų������ڣ�+��-��*��/����Χ�ڣ������Invalid operation!�����������Ϊ�������㣬����/��ʱ�����������2����0.0���������Wrong!Division by zero!��
//�����������������룬һ�У�������1�����������2������������Ű������֣�+��-��*��/����
//������������ÿ�����룬���Ϊһ�С������������������ž��Ϸ��������һ�����ʽ��������1�����������2=������������С����������4λ�����ͷ���֮��û�пո�
int main0101()
{
	double n1 = 0.0;
	double n2 = 0.0;
	char op = 0;
	while (scanf("%lf%c%lf", &n1, &op, &n2)!=EOF)
	{
		switch (op)
		{
		case '+':
			printf("%.4lf+%.4lf=%.4lf\n", n1, n2, n1 + n2);
			break;
		case '-':
			printf("%.4lf-%.4lf=%.4lf\n", n1, n2, n1 - n2);
			break;
		case '*':
			printf("%.4lf*%.4lf=%.4lf\n", n1, n2, n1*n2);
			break;
		case '/':
			if (n2 == 0.0)
			{
				printf("Wrong!Division by zero!\n");
			}
			else
			{
				printf("%.4lf/%.4lf=%.4lf\n", n1, n2, n1/n2);
			}
			break;
		default:
			printf("Invalid operation!\n");
			break;
		}
	}
	return 0;
}