#include<stdio.h>
//�������������ĸA(a), E(e), I(i), O(o),U(u)��ΪԪ��������������ĸ��Ϊ�������ж��������ĸ��Ԫ����Vowel�����Ǹ�����Consonant����
//�����������������룬ÿ������һ����ĸ��
//������������ÿ�����룬���Ϊһ�У����������ĸ��Ԫ����������Сд���������Vowel�������������ĸ�Ƿ�Ԫ���������Consonant����
int main2601()
{
	int ch = 0;
	char s[] = "AaEeIiOoUu";
	while ((ch = getchar()) != EOF)
	{
		//�ж�ch��s�����е�ĳ���ַ��Ƿ�ƥ��
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			if (ch == s[i])
			{
				printf("Vowel\n");
				break;
			}
		}
		if (i == 10)
			printf("Consonant\n");
		getchar();//Ϊ�˹������뻺����
	} 
	return 0;
}