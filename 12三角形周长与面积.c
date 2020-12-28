#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
//题述：根据给出的三角形3条边a, b, c（0 < a, b, c < 100,000），计算三角形的周长和面积。
//输入描述：一行，三角形3条边（能构成三角形），中间用一个空格隔开。
//输出描述：一行，三角形周长和面积（保留两位小数），中间用一个空格隔开 - circumference=9.00 area=3.90。
int main1201()
{
	int a, b, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	double p = (a + b + c) / 2.0;
	//周长
	double circumference = a + b + c;
	//面积 - 海伦公式：
	//假设平面内，有一个三角形，边长分别为a、b、c，三角形的面积S可由以下公式求出：
	//S = sqrt(p(p-a)(p-b)(p-c))
	//p = (a+b+c)/2 - p为周长的一半
	double area = sqrt(p*(p - a)*(p - b)*(p - c));
	printf("circumference=%.2lf area=%.2lf\n", circumference, area);
	return 0;
}