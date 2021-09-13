#include <stdio.h>
//函数原型
double pow2(double,int);



int main()
{
        //实参，实际传入的参数 即调用
	printf("%d的%d次方为: %.2lf\n",2,10,pow2(2,10));
	return 0;

}
//double num1 和int num2为形参
double pow2(double num1,int num2)
{
	double result = 1;
  	int i;
	for(i = 0;i< num2; i++)
	{
		result *= num1;
	} 

	return result ;
}

