#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Martial
{
       
        int id;          
        char name[50];  
        int count;        
        int type;        
};

struct Player
{
        int id;
        char name[50];
        char pass[50];
        char sex;
        struct Martial martial;
};


int main()
{
	struct Player player1 = {1,"leo","123456",'m',{1, "扭曲丛林", 5000000, 1}};
	struct Player player2 = {2,"jie","123456",'m',{1, "艾欧尼亚", 10000000, 1}};
	struct Player *ptr_player2 =  &player2;
	printf("%s\t%s\t%d\n",player2.name, player2.martial.name,player2.martial.count);
	printf("%s\t%s\t%d\n",(*ptr_player2).name, (*ptr_player2).martial.name,(*ptr_player2).martial.count);
	printf("%s\t%s\t%d\n",ptr_player2->name, ptr_player2->martial.name,ptr_player2->martial.count);
	return 0;
}
