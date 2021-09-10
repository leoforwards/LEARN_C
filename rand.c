#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//1.设置随机数种子,一般跟时间连用
	srand(time(NULL));
	//2.取随机数
	int num = rand();
	printf("%d\n",num);
	return 0;

}
