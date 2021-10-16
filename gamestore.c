#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
模拟实现道具店的购物功能（商店暂支持一种类型的商品）
商品具备名称、价格、库存等属性
模拟玩家要购买的道具
1、玩家选择要购买的道具
2、玩家同意交易后扣除相应游戏币
3、对应商品库存-1
4、玩家背包中增加商品或该商品商量+1
*/

//商品结构
typedef struct _prop{
	int id ;          //道具ID
	char name[50];	  //道具名称
	double price;     //道具单价
	int stock;        //库存量，如果在背包中，表示此道具的叠加数量
	char desc[200];   //道具描述
}Prop;

//背包结构
typedef struct _bag
{
	int playerId;     //所属玩家的编号
	int count;        //道具的数量
	int max;	  //当前背包的容量插槽
	Prop props[8];    //当前背包的道具数组
}Bag;

//玩家结构
typedef struct _player
{
	int id;           //玩家的id
	char name[50];    //玩家的昵称
	char pass[50];    //密码
	Bag bag;          //玩家的背包
	double gold;      //玩家金币-人性显示: 可以显示将10000铜币转换成银币、金币显示
	double sysee;     //元宝数量
}Player;



Prop *props;
Player *players;

int propCount = 0;
int playerCount = 0;
void Init();
void ShowProps();
void ShowPlayers();
//交易函数
//参数1: 参加交易玩家的指针-为了方便修改玩家交易后的金币数
//参数2: 玩家购买的商品Id

void Trade(Player *player, int propId);


int main()
{
	Init();
	printf("\n*************交易前*************\n");
	ShowProps();
	ShowPlayers();

	Trade(&players[0],3) ; Trade(&players[0],3) ;
	Trade(&players[0],1) ; Trade(&players[0],2); 
	Trade(&players[1],1) ; Trade(&players[2],2); 
	Trade(&players[3],5) ; Trade(&players[2],2); 


	printf("\n*************交易后*************\n");
	ShowProps();
        ShowPlayers();
	return 0;
}

void Trade(Player *player, int propId)
{
	//需要判断: 商品的库存，玩家的余额够不够，玩家的背包空间够不够
	Prop *tradeProp = NULL;   //要购买商品的指针 
	int i;
	for(i = 0; i < propCount; i++)
	{
		if(propId == props[i].id)
		{
			tradeProp = &props[i];
		}	
	}

	if(tradeProp->stock <= 0)
	{
		printf("地主家都没余粮，商店都被买空了！\n");
		return ;
	}
	
	if(player->gold < tradeProp->price)
	{
		printf("余额不足，请充值后再重试！\n");
		return ;
	}
	
	if(player->bag.count >= player->bag.max && player->bag.count != 0)
	{
		printf("背包已满，交易失败！\n");
		return ;
	}
	
	//满足交易条件，执行交易的操作
	//1.商品库存-1
	tradeProp->stock--;
	//2.玩家金币-商品单价
	player->gold -= tradeProp->price;
	//3.玩家背包道具数量增加
	//判断玩家背包是否已有该商品，如果有，总数+1,若无，添加该商品到背包中
	for(i = 0; i < player->bag.count; i++)	
	{
		//如果要购买的商品Id跟背包中的某个商品内的Id相同
		if(propId == player->bag.props[i].id)
		{
			player->bag.props[i].stock++;
			break;
		}
	}

	if(i == player->bag.count) //如果没有该商品，该商品添加到背包之中
	{
		//向背包中创建一个商品
		int newIndex = player->bag.count;
		player->bag.props[newIndex].id = tradeProp->id; 
		player->bag.props[newIndex].price = tradeProp->price; 
		player->bag.props[newIndex].stock = 1; 
		strcpy(player->bag.props[newIndex].name, tradeProp->name);
		strcpy(player->bag.props[newIndex].desc, tradeProp->desc);
		player->bag.count++;
	}

		



	
}


void Init()
{
	static Prop propArray[] = {
        {1,"双倍经验卡",3000,10,"双击666"},
        {2,"腐烂的道袍",5000,8,"可远观不可亵玩"},
        {3,"生锈的铁剑",8000,10,"新手专用"},
        {4,"无极袍",13000,5,"刀枪不入，水火不侵"},
        {5,"一级丹",83000,10,"灵丹妙药"}
	};
	propCount = 5;
	props = propArray;
        static Player PlayArray[]={
        {1,"超级毛毛虫","123456",.gold=500000, .bag.max=8},
        {2,"泰罗奥特曼","123456",.gold=150000, .bag.max=8},
        {3,"原始天尊之徒","123456",.gold=500000, .bag.max=8},
        {4,"星河","123456",.gold=1000000, .bag.max=8}
	};
	playerCount = 4;
	players = PlayArray;

}


void ShowProps()
{
	if(props == NULL) return;
	printf("%-5s\t%-14s\t%-7s\t%-3s\t%-15s\n","编号","名称","单价","库存","商品描述");	
	int i;
	for(i = 0; i < propCount; i++)
	{
		printf("%-5d\t%-14s\t%-7.lf\t%-3d\t%-15s\n",props[i].id, props[i].name, props[i].price, props[i].stock, props[i].desc);
	}	

}

void ShowPlayers()
{
	if(players == NULL) return;
	printf("\n编号\t%-14s\t%-10s\n","名称","金币");
	int i, j;
	for(i= 0; i < playerCount; i++)
	{
		printf("%d\t%-14s\t%-10.2lf\n",players[i].id, players[i].name, players[i].gold);		
		printf("------------------------------------------\n");
		printf("%-14s\t%s\n","道具名称", "道具数量");
		for(j = 0; j < players[i].bag.count; j++)
		{
			printf("%-14s\t%d\n", players[i].bag.props[j].name, players[i].bag.props[j].stock);
		}	
		printf("\n");
	}
}
