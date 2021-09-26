#include <stdio.h>

int factorial(int num);

int main()
{
	int result = factorial(5);
	printf("%d\n",result);
	return 0;
}

int factorial(int num)
{
        if(num == 1)
                return 1;
        else
        {
                num = num * factorial(num - 1);
                return num;
        }
}
