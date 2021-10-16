#include <stdio.h>
#include <stdlib.h>

typedef struct _Job
{       
        int id; 
        char *  name;
        char *  desc;
}Job;

typedef struct _Abillity
{       
        int id;
        char * name;
        char * intro;
}Abillity;

typedef struct _Pubtime
{       
        int year;
        int month;
        int day;
}Pubtime;

typedef struct _Hero
{       
        int id; 
        char  * name;
        char sex;
        Job job;
        double hp;
        double speed;
        Abillity abillity;
        Pubtime pubtime;
}Hero;

void InputHero();
void ShowHero();
