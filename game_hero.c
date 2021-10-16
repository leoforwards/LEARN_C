#include <stdio.h>
#include "hero2.h"
#include <stdlib.h>
#include <string.h>


void Show();

int main()
{	
	printf("%s\n",heros[0].name);
	//数组元素使用指针时，动态赋值需要首先分配内存
	printf("请输入名称： ");
	heros[0].name = (char *)malloc(50);
	scanf("%s",heros[0].name);
	Show();
	
	return 0;
}
