#include <stdio.h>
#include <stdlib.h>
struct emp
{
    int id;
    char name[10];
    int age;
    int salary;
    int overtime;
    int deduction;
};
int check(int length , int targetid);
struct emp arr[3];
int main()
{
 int i,totalSal;

    for(i=0; i<3; i++)
    {
        printf("********** employee no %d ***********\n",i+1);
printf("enter employee id\n");
        scanf("%d",&arr[i].id);
        do{
            if( check( i , arr[i].id)){
            printf("this id is invalid please enter another id");
            scanf("%d",&arr[i].id);
        }

        }while(check( i , arr[i].id)==1);

        printf("enter employee name\n");
        scanf("%s",arr[i].name);
        printf("enter employee age\n");
        scanf("%d",&arr[i].age);
        printf("enter employee salary\n");
        scanf("%d",&arr[i].salary);
        printf("enter employee overtime\n");
        scanf("%d",&arr[i].overtime);
        printf("enter employee deduction\n");
        scanf("%d",&arr[i].deduction);
    }
    for(i=0;i<3;i++){
        totalSal=(arr[i].salary+arr[i].overtime)- arr[i].deduction;
        printf("employee %d info : %d : %s : %d : %d\n",i+1,arr[i].id,arr[i].name,arr[i].age,totalSal);
    }


    return 0;
}

int check(int index , int targetid){
    int j;
    for(j=0;j<index;j++){
        if(arr[j].id==targetid){
            return 1;
        }
    }
    return 0;
}
