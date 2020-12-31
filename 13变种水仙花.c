#include<stdio.h>
//题述：变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，比如1461 可以拆分成（1和461）,（14和61）,（146和1),
//如果所有拆分后的乘积之和等于自身，则是一个Lily Number,求出5位数中的所有Lily Number
//eg: 655=6*55+65*5
//   1461=1*461+14*61+146*1
int main1301()
{
	int i,j = 0;
	printf("5位数中的所有Lily Number是：\n");
	for (i = 10000; i <= 99999; i++)
	{
		int sum = 0;
		for (j = 10; j <= 10000; j*=10)//10 - 100 -1000 - 10000
		{
			sum += ((i / j)*(i%j));
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}