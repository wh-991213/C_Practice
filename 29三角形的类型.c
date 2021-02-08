#include<stdio.h>
#pragma warning(disable:4996)
//题述：KiKi想知道已经给出的三条边a，b，c能否构成三角形，如果能构成三角形，判断三角形的类型（等边三角形、等腰三角形或普通三角形）。
//输入描述：多组输入数据，每一行输入三个a，b，c(0<a,b,c<1000)，作为三角形的三个边，用空格分隔。
//输出描述：针对每组输入数据，输出占一行，如果能构成三角形，等边三角形则输出“Equilateral triangle!”，等腰三角形则输出“Isosceles triangle!”，其余的三角形则输出“Ordinary triangle!”，反之输出“Not a triangle!”。
int main2901()
{
	int a, b, c = 0;
	while (~(scanf("%d %d %d", &a, &b, &c)))
	{
		if (a + b > c && a + c > b && c + b > a)
		{
			//三角形 - 两边之和大于第三边||两边之和小于第三边
			if (a == b && b == c)
			{
				//等边三角形
				printf("Equilateral triangle!\n");
			}
			else if (a == b && a != c || a == c && a != b || b == c && b != a)
			{
				//等腰三角形
				printf("Isosceles triangle!\n");
			}
			else
			{
				//其余三角形
				printf("Ordinary triangle!\n");
			}
		}
		else
		{
			//不是三角形
			printf("Not a triangle!\n");
		}
	}
	return 0;
}