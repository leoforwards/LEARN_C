#include <stdio.h>
#include <ctype.h>

int main()
{
	//0表示假，非0表示真
	printf("%d\n",isupper('a'));
	printf("%d\n",islower('a'));
	printf("%d\n",isalpha(97));
	printf("%d\n",isdigit('9')); //如果传入的是数字，表示的是ASCII码
	//转换大小写
	printf("大写：%c\n",toupper('a'));
	int money,i = 0,count = 0;
	int moneys[20];
	char unit[10][4] = {"零","壹","贰","叁","肆","伍","陆","柒","捌","玖"};
	printf("请输入数字：");
	scanf("%d",&money);	
	while( money != 0)
	{
		moneys[i] = money % 10;
		money /= 10;
		i++;
		count++;
	}
	printf("输入的数字总共有%d位!\n",count);
	
	for(i = 0; i < count;i++)
	{
		printf("数字对应的大写为：%d => %s\n",moneys[count - i - 1],unit[moneys[count - i - 1]]);	
	}



/*	int i;
	for(i=0;i<=127;i++)
	{
		printf("%c,",i);
	}	*/
	return 0;
}
