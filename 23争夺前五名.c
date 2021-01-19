#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//题述：期中考试开始了，大家都想取得好成绩，争夺前五名。从键盘输入n个学生成绩（不超过40个），输出每组排在前五高的成绩。
//输入描述：两行，第一行输入一个整数，表示n个学生（>=5），第二行输入n个学生成绩（整数表示，范围0~100），用空格分隔。
//输出描述：一行，输出成绩最高的前五个，用空格分隔。
int main2301()
{
	int n = 0;
	int arr[40] = { 0 };
	//n个学生
	scanf("%d", &n);
	//n个学生的成绩
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//排序 - 降序		
	for (i = 0; i < n - 1; i++)
	{
		int j = 0;
		for (j = 0; j < n-1-i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	//输出成绩
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}