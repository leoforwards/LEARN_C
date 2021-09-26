#include <stdio.h>

void change(int);
int main()
{
	int num = 9;
	change(num);
	printf("num的值为: %d\n",num);
	
	return 0;

}

void change(int num)
{

	num++;
}
