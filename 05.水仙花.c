#include<stdio.h>
#include<math.h>

//题述：打印出100-999以内的“水仙花数”，所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数本身。
//例如：153是一个“水仙花数”，因为153 = 13＋53＋33。
int main0501()
{
	int n = 100;
	int i, j, k;
	printf("1000以内的水仙花数是：\n");
	do
	{
		i = n % 10;//个位
		j = n / 10 % 10;//十位
		k = n / 100;//百位
		if (pow(i, 3) + pow(j, 3) + pow(k, 3) == n)//等同于i*i*i+j*j*j+k*k*k；pow函数的使用需要导入头文件<math.h>,它可以计算一个数的次方值
		{
			printf("%d ", n);
		}
		n++;
	} while (n <= 999);
	return 0;
}