#include <stdio.h>
#include <string.h>
#define USER_NAME "admin"
#define PASSWORD  "admin"

void Getstring(char [],int);
void strlen_chk();	//字符串长度输出
void strcpy_chk();      //字符串复制
int  strcmp_chk(char [],char []); //验证传入的用户密码是否正确
void strcat_chk();      //字符串拼接

int main()
{
	strlen_chk();

	strcpy_chk();

	char UserName[50];
	char Password[50];
	int  result ;
	printf("请输入用户名: ");
	Getstring(UserName,50);
	printf("请输入密码: ");
	Getstring(Password,50);
	result = strcmp_chk(UserName,Password);
	if(result == 1)
		printf("输入正确，登录成功！\n");
	else
		printf("输入错误，登录失败！\n");
	
	strcat_chk();

	return 0;	
}

//fgets默认在字符后面加\n，此函数目的为去除\n
void Getstring(char str[],int count)
{
        fgets(str,count,stdin);
        char * find = strchr(str,'\n');
        if(find)
        {
                *find = '\0';
        }
}

void strlen_chk()
{
	//strlen只计算实际的字符长度，不好含空字符"\0"
	char word1[] = "HELLOWORLD";
        char word2[] = {'H','E','L','L','O','W','O','R','L','D','\0'};
        char word3[] = "你好，LEO!";
        printf("word1的字符串长度为%d\n",strlen(word1));
        printf("word2的字符串长度为%d\n",strlen(word2));
        printf("word3的字符串长度为%d\n",strlen(word3));
}

void strcpy_chk()
{
	char word1[50] = "HELLOWORLD";
	char word2[20];
	printf("请输入字符串: ");
	fgets(word2,50,stdin);
	strcpy(word1,word2); //将字符word2的值赋予word1,切勿混淆
	printf("%s\n%s\n",word1,word2);
}

int strcmp_chk(char UserName[],char Password[])
{
	//strcmp，相等的字符串输出为0，小于正数，大于输出负数,比较的值为字符的ASCII码值
	int result = 0;
	if(strcmp(USER_NAME,UserName) == 0 && strcmp(PASSWORD,Password) == 0)
	{
		result = 1;
	}	
	return result;		
}


void strcat_chk()
{
	char str1[] = "你好，中国！";
        char str2[] = "你好，郑州！";	
	strcat(str1,str2); //将字符st1和str2拼接到str1
	printf("str1:%s\nstr2:%s\n",str1,str2);
}






