#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _mytime
{
	int year;
	int month;
	int day;	
}MyTime;


typedef struct _hero
{
	char * name;
	char sex;
	char *job;
	int  life;
	double speed;
	char *abillity;
	MyTime pubTime;	
}Hero;

        Hero heros[100] = {
{"影流之主劫",'m',"刺客",579,0.644,"位移",{2012,8,15}},
{"琴瑟仙女",'f',"法师",482,0.644,"减速、治疗",{2010,9,20}},
{"疾风剑豪",'m',"战士",517,0.67,"护盾、位移",{2013,12,23}}
};

int count = 3; //当前的英雄数量

void  Input()
{
	char answer  = 'y';
	char ch;
	do{
		if(count == 100)
		{
			printf("英雄的栏位已满，请到游戏商城购买!");
			break;
		}
		printf("当前录入第%d位英雄的信息: \n",count + 1);
		printf("英雄名称: ");
		heros[count].name = (char*)malloc(50);
		scanf("%s",heros[count].name);
		
		printf("性别: ");
		while((ch=getchar())!='\n');
		heros[count].sex = getchar();
		while((ch=getchar())!='\n');
		
		printf("职业: ");
		heros[count].job = (char*)malloc(50);
		scanf("%s", heros[count].job);
		
		heros[count].life = 1000;
		heros[count].speed = 0.644;
		
		heros[count].abillity = "上天，入地";
		
		heros[count].pubTime.year = 2016;
		heros[count].pubTime.month = 4;
		heros[count].pubTime.day = 9;

		count++;
		printf("是否继续录入?(y/n)");
		while((ch=getchar())!='\n');
		answer  = getchar();
		while((ch=getchar())!='\n');
	}while(answer == 'y' | answer == 'Y');
}

void ShowAvg()
{
	int lifesum = 0;
	double avg;
	int i;
	for(i = 0; i < count; i++)
	{
		lifesum += (heros + i)->life;
	}
		avg = lifesum * 1.0 / count;
		printf("生命值的平均值为; %2.lf\n",avg);
}


void Show()
{
	int i;
//        int len = sizeof(heros) / sizeof(Hero);
//        printf("结构数组的元素个数为: %d\n",count);
	for( i = 0; i < count; i++)
	{
		printf("%s\t%s\t%d-%d-%d\n",heros[i].name,heros[i].job,heros[i].pubTime.year,heros[i].pubTime.month,heros[i].pubTime.day);
	}
}
