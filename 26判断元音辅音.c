#include<stdio.h>
//题述：有五个字母A(a), E(e), I(i), O(o),U(u)称为元音，其他所有字母称为辅音，判断输入的字母是元音（Vowel）还是辅音（Consonant）。
//输入描述：多组输入，每行输入一个字母。
//输出描述：针对每组输入，输出为一行，如果输入字母是元音（包括大小写），输出“Vowel”，如果输入字母是非元音，输出“Consonant”。
int main2601()
{
	int ch = 0;
	char s[] = "AaEeIiOoUu";
	while ((ch = getchar()) != EOF)
	{
		//判断ch与s数组中的某个字符是否匹配
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
		getchar();//为了过滤输入缓冲区
	} 
	return 0;
}