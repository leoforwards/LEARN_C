#include <stdio.h>
//书写函数实现数组元素的查找，要求返回找到的元素下标
int search();
//书写函数实现冒泡排序并返回排序后的数组
//double[] sort();
//书写函数要求用户输入密码（6位，错误重新输入）,返回并打印用户输入的正确密码
//char * password();

int main()
{
	int index = search();
	if(index != -1)
	{
		printf("找到的元素下标是：%d\n",index);
	}
	else
	{
		printf("没有找到该元素！\n");
	}

	return 0;
}

int search()
{
	int nums[] = {34,56,78,43,77,23};
	int i;
	int searchNum;
	int searchIndex = -1;
	printf("请输入要查找的整形数字: ");
	scanf("%d",&searchNum);	
	for(i = 0; i < 6; i++)
	{
		if(searchNum == *(nums + i))
		{
			searchIndex = i;
			break;
		}
	}
	return searchIndex;
}	
