#include<stdio.h>
#pragma warning(disable:4996)
//题述1：计算BMI指数（身体质量指数）。BMI指数（即身体质量指数，简称体质指数又称体重，英文为Body Mass Index，简称BMI），
//是用体重公斤数除以身高米数平方得出的数字，是目前国际上常用的衡量人体胖瘦程度以及是否健康的一个标准。
//主要用于统计用途，当我们需要比较及分析一个人的体重对于不同高度的人所带来的健康影响时，BMI值是一个中立而可靠的指标。
//输入描述：一行，两个整数，分别表示体重（公斤），身高（厘米），中间用一个空格分隔
//输出描述：一行，BMI指数（保留两位小数）。
int main1101()
{
	int weight = 0;
	int height = 0;
	float BMI = 0;
	printf("请输入你的体重(公斤)、身高(厘米)");
	scanf("%d %d", &weight, &height);
	BMI = weight / ((height / 100.0)*(height / 100.0));
	//这里100.0是为了把它转化成浮点数
	//5/2=2 - 整数除法；如果想要5/2=2.5就必须保证除号的两端至少有一个是小数 - 5/2.0 、 5.0/2 、 5.0/2.0  - 小数除法
	printf("你的BMI指数是%.2f\n", BMI);
	return 0;
}

//题述2：在得到BMI指数的基础上，判断人体胖瘦程度。其中国标准如下：
// BMI范围               | 分类
// BMI<18.5              | 偏瘦(Underweight)
// BMI>=18.5且BMI<=23.9  | 正常(Normal)
// BMI>23.9且BMI<=27.9   | 过重(Overweight)
// BMI>27.9				 | 肥胖(Obese)

//输入描述：多组输入，每一行包括两个整数，用空格隔开，分别为体重（公斤）和身高（厘米）。
//输入描述：针对每行输入，输出为一行，人体胖瘦程度，即分类。
int main1102()
{
	int w = 0;
	int h = 0;
	while (scanf("%d %d", &w, &h)!=EOF)
	{
		float bmi = w / (h*h / 100.0 / 100.0);
		if (bmi < 18.5)
			printf("Underweight\n");
		else if (bmi > 18.5&&bmi < 23.9)
			printf("Normal\n");
		else if (bmi > 23.9&&bmi <= 27.9)
			printf("Overweight\n");
		else
			printf("Obese\n");
	}
	return 0;
}