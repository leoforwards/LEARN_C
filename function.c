#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void calcCircle();
void calcRentangle();
int  calcSum();

/* 计算圆和矩形的面积，函数实现*/

int main()
{
	//calcCircle(); //调用圆面积的自定义函数
	calcRentangle();  //调用矩形的自定义函数
 	//如果函数有返回值，调用时，记得使用对应函数的变量来接收

 	int sum = calcSum(); 
	printf("1到100的偶数和为: %d\n",sum);
	return 0;
}

void  calcCircle()
{
	double radius, s; //半径和面积
	printf("请输入圆的半径: ");
	scanf("%lf",&radius);
	s = 3.14 * pow(radius, 2);
	printf("圆的面积为: %.2lf\n",s);
}

void calcRentangle() 
{
	double weith, height, s; //宽和高
        printf("请输入矩形的宽和高: ");
        scanf("%lf%lf",&weith,&height);
	if(weith <= 0 || height <= 0)
	{
		printf("输入的值不能为非正数，程序将退出！\n");
		return;
	}
        s = weith * height;
        printf("矩形的面积为: %.2lf\n",s);
}
int  calcSum()
{
	//1到100之间的偶数和	
	int sum = 0;
	int i = 1;	
	for(i = 1; i <= 100; i++)
	{
		if( i % 2 == 0)
		{
			sum += i;
		}
	}
	return sum; //将计算好的结果返回
}



