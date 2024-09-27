#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define null -32

 void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }


void textattr(int i)
{
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}
struct Employee {
    int id;
    char name[50];
    // Add more fields as needed
};


int main(){
    char items[5][20]={"new","display","delete_by_id","delete_by_name","exit"};
    int i;
    char ch;
    int cursur=0;
     int flag=0;
     int employeeNumbers;
      printf("pleas inter The number of employees");
      scanf("%d",&employeeNumbers);

     struct Employee* employees=( struct Employee)malloc(employeeNumbers*sizeof(struct Employee));
     int numEmployees = 0;
     do{
system("cls");
    for(i=0;i<5;i++){
        gotoxy(10,5+i);
        if(i==cursur){
            textattr(0x27);
        }
        printf("%s",items[i]);
        textattr(0x07);
    }   ch=getch();
    switch(ch){
        case 27:
       flag=1;
       break;
        case 13: //enter
          system("cls");
            if (cursur == 4)
        flag = 1;
    else {
        printf("%s", items[cursur]);
        if (cursur == 0) { // "new" selected
            struct Employee newEmployee;
            printf("Enter employee ID: ");
            scanf("%d", &newEmployee.id);
            printf("Enter employee name: ");
            scanf("%s", newEmployee.name);

            // Check if the employee already exists
            int existingIndex = -1;
            int i;
            for ( i = 0; i < numEmployees; i++) {
                if (employees[i].id == newEmployee.id) {
                    existingIndex = i;
                    break;
                }
            }

            if (existingIndex != -1) {
                printf("Employee with ID %d already exists.\n", newEmployee.id);
                printf("Override existing record? (Y/N): ");
                char choice;
                scanf(" %c", &choice);
                if (choice == 'Y' || choice == 'y') {
                    employees[existingIndex] = newEmployee;
                    printf("Record overridden successfully.\n");
                } else {
                    printf("Record not overridden.\n");
                }
            } else {
                employees[numEmployees] = newEmployee;
                numEmployees++;
                printf("Employee record added successfully.\n");
            }
        }

        if(cursur==1){
        system("cls");
       int i;
       for (i = 0; i < numEmployees; i++) {
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("\n");
        return ;
    }
        }
        if(cursur==2){

            system("cls");
    int deleteID;
    printf("Enter the ID of the employee to delete: ");
    scanf("%d", &deleteID);

    int deleteIndex = -1;
    int i;
    for ( i = 0; i < numEmployees; i++) {
        if (employees[i].id == deleteID) {
            deleteIndex = i;
            break;
        }
    }

    if (deleteIndex == -1) {
        printf("Employee with ID %d not found.\n", deleteID);
    } else {
        printf("Are you sure you want to delete the following employee?\n");
        printf("ID: %d\n", employees[deleteIndex].id);
        printf("Name: %s\n", employees[deleteIndex].name);
        printf("Confirm deletion? (Y/N): ");
        char confirm;
        scanf(" %c", &confirm);
        if (confirm == 'Y' || confirm == 'y') {
            // Shift the remaining employees to fill the gap
            int i;
            for ( i = deleteIndex; i < numEmployees - 1; i++) {
                employees[i] = employees[i + 1];
            }
            numEmployees--;
            printf("Employee deleted successfully.\n");
        }
    }

        }
        if (cursur==3){
            system("cls");
    char deleteName[50];
    printf("Enter the name of the employee to delete: ");
    scanf("%s", deleteName);

    int deleteIndex = -1;
    int i;
    for ( i = 0; i < numEmployees; i++) {
        if (strcmp(employees[i].name, deleteName) == 0) {
            deleteIndex = i;
            break;
        }
    }

    if (deleteIndex == -1) {
        printf("Employee with name %s not found.\n", deleteName);
    } else {
        printf("Are you sure you want to delete the following employee?\n");
        printf("ID: %d\n", employees[deleteIndex].id);
        printf("Name: %s\n", employees[deleteIndex].name);
        printf("Confirm deletion? (Y/N): ");
        char confirm;
        scanf(" %c", &confirm);
        if (confirm =='Y' || confirm == 'y') {
            // Shift the remaining employees to fill the gap
            int i;
            for ( i = deleteIndex; i < numEmployees - 1; i++) {
                employees[i] = employees[i + 1];
            }
            numEmployees--;
            printf("Employee deleted successfully.\n");
        }
    }
        }
    getch();
    }

    break;

    case -32:
        ch=getch();
        switch(ch){
        case 72://up
            cursur--;
            if(cursur<0)
                cursur=4;
            break;
        case 71://down
            cursur=0;
            break;
        case 80:
            cursur++;
            if(cursur>4)
                cursur=0;
            break;
        case 79:
            cursur=4;
        }

    }
     }
     while(flag==0);

    return 0;

}
