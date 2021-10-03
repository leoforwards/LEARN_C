#include <stdio.h>
int main()
{
	//字符串和字符数组的区别：最后一位是否为空字符
	char names1[] = {'j','a','c','k','\0'};
	char names2[] = "jack";
	printf("数组占空间的大小：%d %d\n",sizeof(names1),sizeof(names2));
 	printf("请输入新名称：");
	scanf("%s",names2);
	printf("%s\n",names2);
	return 0;

}
