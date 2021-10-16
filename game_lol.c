#include "Hero.h"

void InputHero();
void ShowHero();

Hero heros[5];
Job jobs[5] = {
	{1,"法师","掌控雷电专家"},
	{2,"刺客","千年杀专家"},
	{3,"战士","综合格斗专家"},
	{4,"射手","远程制敌专家"},
	{5,"辅助","峡谷节奏大师"}
};

void InputHero()
{
	int i, j, jobChoice;
	char ch;
	for (i = 0; i < 2; i++)
	{
		printf("请输入第%d位的英雄信息: \n", i+1);
		heros[i].id = i + 1;
		printf("名称： ");
		heros[i].name = (char*)malloc(50);
		scanf("%s", heros[i].name);
		printf("性别: ");
		scanf("%c", &heros[i].sex);
		while((ch=getchar())!='\n');
		fflush(stdin);
		for (j = 0; j < 5; j++)
			printf("%s\n", jobs[j].name);
		printf("请选择职业(1-5之间的整数): ");
		scanf("%d", &jobChoice);
		while((ch=getchar())!='\n');
		heros[i].job = jobs[jobChoice - 1];
		printf("%s当前的职业:《%s》\n", heros[i].name, heros[i].job.name);
	}
}

int main()
{
	InputHero();
	return 0;
}
