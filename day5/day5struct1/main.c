#include <stdio.h>
#include <stdlib.h>

struct emp{
    int id;
    char name[10];
    int age;
    int salary;
    int overtime;
    int deduction;

};
int main()
{
     int id=0;
    char name[10]="0";
    int age=0;
    int salary=0;
    int overtime=0;
    int deduction=0;

   struct emp e1;
    int fullsal=0;
    printf("please enter your id:\n");
    scanf("%d",&e1.id);
     printf("please enter your name:\n");
    scanf("%s",e1.name);
    printf("please enter your age:\n");
    scanf("%d",&e1.age);
    printf("please enter your salary:\n");
    scanf("%d",&e1.salary);
    printf("please enter your overtime:\n");
    scanf("%d",&e1.overtime);
    printf("please enter your deduction:\n");
    scanf("%d",&e1.deduction);
    fullsal=(e1.salary+e1.overtime)-e1.deduction;
    printf("the id is %d, the name is %s, the age is %d ,the fullsal is %d",e1.id,e1.name,e1.age,fullsal);


    return 0;
}
