#include <stdio.h>

int test();
int test2();
int count3;
int main()
{
	register int count1 = 0; //寄存器变量
	do{
		int count2 = 0;
		count2++;
		printf("count1 = %d\tcount2 = %d\t\n",count1,count2);
	}while( ++count1 < 5);
	//printf("count1 = %d\tcount2 = %d\t\n",count1,count2);
	
	/*++count1 < 5 => count1++ ; while(count1 < 5)	
	count1++ < 5 => while(count1 < 5); count1++	*/ 
	//test();
	test2();
	test2();
	printf("count3 = %d\n",count3);
	return 0;

}

int test()
{
	int count = 0;
	do{
		int count = 0;
		count++;
		
		printf("count = %d\n",count);
		count++;
	}while(count < 5);//外部的count,导致死循环
	//变量的作用域，决定了可访问性
	printf("count = %d\n",count);
}

int test2()
{
	count3 ++;
}
