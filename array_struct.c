#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Hero
{
	int id;
	char name[50];
	char skill[50];
	int hp;
	int mp;
	int level;
};


struct Hero1
{
	int id;
        char * name;
        char skill[50];
        int hp;
        int mp;
        int level;
};


struct Martial
{
	//门派
	int id;           //m门派id
	char name[50];	  //门派名称
	int count; 	  //门派人数
	int type;         //门派的类型-1正派 2中立 3 邪派
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
	
	//使用结构体
	/* struct Hero hero1;
	hero1.id = 1;
	strcpy(hero1.name,"德玛西亚之力");
	hero1.hp = 500;
	hero1.mp = 100;
	hero1.level = 5;
	strcpy(hero1.skill,"大宝剑"); 	 */

	//struct Hero1 hero1 ={2, "祥林嫂", .skill = "哈撒给", 1000, 200, 10};
	
	/* hero1.name = (char*)malloc(50);
	printf("请输入英雄的名称: ");
	scanf("%s",hero1.name);
	printf("%d\t%s\t%d\t%d\t%s\n",hero1.id,hero1.name,hero1.level,hero1.mp,hero1.skill);
 */
	struct Player player = {1,"leo","123456",'m',{1, "扭曲丛林", 5000000, 1}};	
	printf("%s\t%s\t%d\n",player.name, player.martial.name,player.martial.count);


	return 0;
}
