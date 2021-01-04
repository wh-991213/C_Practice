#include<stdio.h>
//题述:假设你们社团要竞选社长，有两名候选人分别是A和B，社团每名同学必须并且只能投一票，最终得票多的人为社长.
//输入描述：一行，字符序列，包含A或B，输入以字符0结束。
//输出描述：一行，一个字符，A或B或E，输出A表示A得票数多，输出B表示B得票数多，输出E表示二人得票数相等。
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