#include <stdio.h>

double pow2(double,int);
double calcCircle(double);
double calcRectangle(double,double);
int validate(double);

int main()
{

	printf("%d的%d次方为: %.2lf\n",2,10,pow2(2,10));
        double radius, s;
        double width, height;
	int choice;
	printf("1.圆\n2.矩形\n3.三角形\n");
	printf("本系统支持以上三种图形的面积，请选择: ");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		do{
               		printf("请输入圆的半径: ");
                	scanf("%lf",&radius);
                	if(!validate(radius))
                	{
                        	printf("所录入的内容不能为负，请输入一个正数！\n");
                	}
        	}	
        	while(!validate(radius));
        	s = calcCircle(radius);
		break;
	case 2:
		 do{
                        printf("请输入矩形的长和高: ");
                        scanf("%lf%lf",&width,&height);
                        if(!validate(width) || !validate(height))
                        {
                                printf("所录入的内容不能为负，请输入正数！\n");
                        }
                }
                while(!validate(width) || !validate(height));
                s = calcRectangle(width, height);
		break;
	case 3:
		do{
                        printf("请输入三角形的长和高: ");
                        scanf("%lf%lf",&width,&height);
                        if(!validate(width) || !validate(height))
                        {
                                printf("所录入的内容不能为负，请输入正数！\n");
                        }
                }
                while(!validate(width) || !validate(height));
                s = calcRectangle(width, height)/2;
		break;
	defalut:
		printf("本系统只支持3种图形，请在1-3之间选择！");
	}
        
	printf("图形的面积为: %.2lf\n",s);
        return 0;
}

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

                                                                              
double calcCircle(double radius)
{
        double s = 3.14 * pow2(radius,2);
        return s;
        
}

double calcRectangle(double width,double height)
{
	return width * height;
}
int validate(double num)
{
	return num > 0;//如果num>0.会返回一个非零值，表示为真
}
