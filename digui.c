#include <stdio.h>
void test();

int main()
{
        test();

        return 0;
}

int num = 0;
void test()
{
	printf("%d\n",num++);
	test();
}
