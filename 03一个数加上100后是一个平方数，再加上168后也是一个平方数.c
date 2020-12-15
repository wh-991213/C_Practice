#include<stdio.h>
#include<math.h>
//题述：一个整数（100以内），它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
int main03()
{
	
	int x, y,i;
	for ( i = 1; i < 100; i++)
	{
		//sqrt函数所在头文件<math.h> - 它可以计算一个数的平方根 eg:int n = sqrt(49)     n == 7
		//x和y分别接收100以内的某个数分别加上100和268的平方根
		x = sqrt(i + 100);
		y = sqrt(i + 100 + 168);

		if (x*x == i + 100 && y*y == i + 100 + 168)//再判断得到的根x和y的平方同时匹配某个数加上100和268
			printf("该数是%d\n", i);
	}
	return 0;
}