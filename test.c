#include <stdlib.h>
#include <stdio.h>

struct student
{
    int num;
    char name[20];
    char sex;
    int age;
};

struct student stu[3] = {{10101, "Li Lin", 'M', 18},
			{10102, "Zhang Fun", 'M', 19},
			{10103, "Wang Min", 'F', 20}};

int main()
{
    struct student *p;
    printf("No.    name        sex        age\n");
    for(p=stu; p<stu+3;p++)
        printf("%5d %-20s %2c %4d\n", p->num, p->name, p->sex, p->age);
}
