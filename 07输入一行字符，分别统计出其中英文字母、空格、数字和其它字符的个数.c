#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
//题述：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数
//注：
//英文字母包括大小写
//其它字符就是排除英文字母、空格、数字的字符 - 就是ASCII码中的"!——/"(33-47)||":——@"(58-64)||"[——`"(91-96)||"{——~"(123-126)
int main0701()
{
	char arr[10];
	int i,j = 0;
	//记数器
	int Aa_count = 0;//记录大小写字母
	int Sp_count = 0;//记录空格
	int Nu_count = 0;//记录数字
	int El_count = 0;//记录其它字符
	printf("请输入10个字符包括英文字母、空格、数字、其它字符\n");
	//scanf("%s", arr);//这里有个bug - 如果输入一串字符里有带空格 - 则空格后的字符不会被接收
		
	scanf("%[^\n]", arr);//正则表达式 - 用于接收空格 - 但注意输入字符数量 - 否则可能造成栈溢出
	//or:
	//for (j = 0; j < 10; j++)
	//{
	//	scanf("%c", &arr[j]);//所以这里采用循环的方式一个字符一个字符往arr数组里存放 - 这样写还有一个好处是防止数组越界 - 无论写多少个字符，它都只存放10个
	//	if (arr[j] == '\n')//如果用户按下了回车就跳出此循环去统计各种字符
	//		break;
	//}

	for ( i = 0; i < 10; i++)
	{
		//if (arr[i] >= 65 && arr[i] <= 90 || arr[i] >= 97 && arr[i] <= 122)//同arr[i]>='A'&& arr[i]<='Z'||arr[i]>='a'&& arr[i]<='z' 
		//{
		//	Aa_count++;
		//}
		//isalpha表头文件<ctype.h> - 这个库函数可以判断字符是否是字母 - 如果是则返回真，否则返回假
		if (isalpha(arr[i]))
		{
			Aa_count++;
		}
		if (arr[i] == ' ')//同32
		{
			Sp_count++;
		}
		if (arr[i] >= 48 && arr[i] <= 57)
		{
			Nu_count++;
		}
		if (arr[i] >= 33 && arr[i] <= 47 || arr[i] >= 58 && arr[i] <= 64 || arr[i] >= 91 && arr[i] <= 96 || arr[i] >= 123 && arr[i] <= 126)
		{
			El_count++;
		}
	
	}
	printf("英文字母有%d个\n", Aa_count);
	printf("空格有%d个\n", Sp_count);
	printf("数字有%d个\n", Nu_count);
	printf("其它字符有%d个\n", El_count);
	return 0;
}