#include <stdio.h>
#include <stdlib.h>
#define N 5

void input(double[]);
void sort(double[]);
void show(double[]);
int find(double *,int findNum);

int main()
{
	//量数组空间
	double test[]={1, 2, 3, 4, 5, 6, 7};
	printf("test数组的元素的个数为: %d\n",sizeof(test) / sizeof(test[0]));




	double scores[N];
	double findNum;
	input(scores);
	printf("排序前: \n");
 	show(scores);
	printf("排序后: \n");
	sort(scores);
 	show(scores);
	printf("请输入要查找的数字: ");
	scanf("%lf",&findNum);
	printf("找到的数字下标为: %d\n",find(scores,findNum));
	return 0;
}

void input(double scores[])
{
	int i;
	for(i = 0; i < N; i++)
	{
		printf("请输入第%d门课的成绩: ", i + 1);
		scanf("%lf",&scores[i]);
	}

}

void sort(double scores[])
{
	int i,j;
	double temp;
	for(i = 0; i < N -1;i++)
	{
		for(j = 0; j < N - i - 1; j++ )
		{
			if(scores[j] > scores[j + 1])
			{
				temp = scores[j];
				scores[j] = scores[j + 1];
				scores[j + 1] = temp;
			}
		}
	}
}

void show(double scores[])
{
	int i;
	printf("************************************\n");
	printf("语文\t数学\t英语\t物理\t化学\n");
	for(i = 0; i < N; i++)
	{
		printf("%2.lf\t",scores[i]);
	}
	printf("\n************************************\n");
	
}

int find(double * scores, int findNum)
{
	int findIndex = -1;
	int i;
	for (i = 0; i < N; i++)
	{
		if(findNum == scores[i])
		{
			findIndex = i;
			break;
		}
	}	

	return findIndex;
}
