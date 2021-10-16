#include <stdio.h>

int main()
{
	/*char * words = "My heart is still.";
	words += 9;
	puts(words);
	printf("%p\n",words);*/

	char str1[] = "For The Horde";
	char * str2 = "For The Horde";
	
	printf("字符常量的地址: %p\n","For The Horde");
	printf("字符数组的地址: %p\n",str1);
	printf("字符指针的地址: %p\n",str2);
	return 0;
}
