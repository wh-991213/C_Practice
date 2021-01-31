#include<stdio.h>
#include<ctype.h>
int main2701()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if ((ch >= 'A'&&ch <= 'Z') || (ch >= 'a'&&ch <= 'z'))
		{
			printf("%c is an alphabet.\n",ch);
		}
		else
		{
			printf("%c is not an alphabet.\n",ch);
		}
		getchar();
	}
	return 0;
}

int main2702()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (isalpha(ch))
		{
			printf("%c is an alphabet.\n",ch);
		}
		else
		{
			printf("%c is not an alphabet.\n",ch);
		}
		getchar();
	}
}