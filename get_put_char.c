#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Getstring(char [],int count);
int Getstring(char str[],int count)
{
	fgets(str,count,stdin);
	char * find = strchr(str,'\n');
	if(find)
	{
		*find = '\0';
	}
}



int GetstrLength(char[]);

int GetstrLength(char str[])
{
	int count = 0;
	while(str[count] != '\0')
	{
	/*	if(str[count] == '\n')
		{
			str[count] = '\0';
			break;
		}*/
		count++;
	}
	return count;
}

int main()
{
/*	char names[5]="jack";
	int i;
	printf("请输入新名称: ");
	//gets(names);
	//puts(names); 
	//gets,puts输入和输出字符，不会检查字符串的buffer边界，会造成越界，从而产生bug

	fgets(names,10,stdin);//从标准输入流读取10字节到数组names中
	//fgets会默认给最后一个元素设置为\n
	for(i = 0; i < 50; i++)
	{	
		printf("%d\n",names[i]);
	}*/

	char names1[50];
	Getstring(names1,20);
	//fgets(names1,5,stdin);
	int len = GetstrLength(names1);
	printf("字符串的长度为: %d\n",len);
	return 0;
}
