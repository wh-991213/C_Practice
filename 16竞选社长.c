#include<stdio.h>
//����:������������Ҫ��ѡ�糤����������ѡ�˷ֱ���A��B������ÿ��ͬѧ���벢��ֻ��ͶһƱ�����յ�Ʊ�����Ϊ�糤.
//����������һ�У��ַ����У�����A��B���������ַ�0������
//���������һ�У�һ���ַ���A��B��E�����A��ʾA��Ʊ���࣬���B��ʾB��Ʊ���࣬���E��ʾ���˵�Ʊ����ȡ�
int main1601()
{
	int ch = 0;
	int count_A = 0;
	int count_B = 0;
	while ((ch = getchar()) != '0'&&ch != EOF)
	{
		if (ch == 'A')
			count_A++;
		if (ch == 'B')
			count_A++;
	}
	if (count_A == count_B)
		printf("%c\n", 'E');
	else if (count_A > count_B)
		printf("%c\n", 'A');
	else
		printf("%c\n", 'B');
	return 0;
}