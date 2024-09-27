#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct emp
{
    int id;
    char name[10];
    int age;
    int salary;
    int overTime;
    int deduction;
};

int main()
{
    struct emp arr[2];
    int fullSalary;
    int i;

    for (i = 0; i < 2; i++)
    {

        bool isDuplicateId;
       printf("\nPlease enter all data of student %d\n", i + 1);
            printf("\nPlease enter ID: ");
            scanf("%d", &arr[i].id);

        int j;
        do
        {

            isDuplicateId = false;

            for ( j = 0; j < i; j++)
            {
                if (arr[i].id == arr[j].id)
                {
                    isDuplicateId = true;
                    printf("\nID already exists. Please enter a different ID.\n");
                    scanf("%d", &arr[i].id);

                    break;
                }
            }
        } while (isDuplicateId==true);
        printf("\nPlease enter name: ");
        scanf("%s",arr[i].name);

        printf("\nPlease enter salary: ");
        scanf("%d", &arr[i].salary);

        printf("\nPlease enter overtime: ");
        scanf("%d", &arr[i].overTime);

        printf("\nPlease enter deduction: ");
        scanf("%d", &arr[i].deduction);


    }

    for (i = 0; i < 2; i++)
    {
        printf("\nName: %s\nAge: %d\nFull salary of student %d: %d\n", arr[i].name, arr[i].age, i + 1, fullSalary);
         fullSalary = (arr[i].salary + arr[i].overTime) - arr[i].deduction;
    }

    return 0;
}









