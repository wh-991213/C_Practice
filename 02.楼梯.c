#include<stdio.h>
	//题述：在某公园，修建了向上攀爬的阶梯，小明是一名登山爱好者，每次从下往上跳，
	//	如果一次跳2步，最后剩下1步；
	//	如果一次跳3步，最后剩下2步；
	//	如果一次跳4步，最后剩下3步；
	//	如果一次跳5步，最后剩下4步；
	//	如果一次跳6步，最后剩下5步；
	//	如果一次跳7步，正好跳完所有阶梯；
	//	请问，该阶梯至少多少步？
int main02()
{
	//转换为数学语言：
	//一个数
	//如果除2，最后余1
	//如果除3，最后余2
	//如果除4，最后余3
	//如果除5，最后余4
	//如果除6，最后余5
	//如果除7，最后余0
	//这个数至少是多少 - 该阶梯至少是7的倍数
	for (int i = 2; i < 200; i++)
	{
		if (i % 7 == 0 && i % 2 == 1 && i % 3 == 2 && i % 4 == 3 && i % 5 == 4 && i % 6 == 5)
		{
				printf("该阶梯至少是%d步\n", i);
		}
	}
	return 0;
}