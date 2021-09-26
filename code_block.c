#include <stdio.h>
int main()
{
	int num1 = 10;
	{//代码块 - 域
		int num2 = 100;
		printf("%d\n",num1 + num2);
	}
	//printf("%d\n",num);
	//printf("%d\n",num1 + num2);
	return 0;
}
