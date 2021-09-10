#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i ;
	int * nums;
	nums = (int *)malloc(sizeof(int) * 5);
	//为前面的指针动态分配了20个字节的空间
	//为指针分配空间后，指针就变成了数组
	//等价于int nums[5]
/*	for(i = 0; i < 5; i++)
	{
		printf("请输入第%d个元素: ",i + 1);
		scanf("%d",nums + i);
	} */
	nums[3] = 1121;
	printf("数组元素为：\n");
	for(i = 0; i < 5; i++)
	{
		printf("%d\t",*(nums + i));
	}
	free(nums); //释放的分配的内存
	nums = NULL;

}
