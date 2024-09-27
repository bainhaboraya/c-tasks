#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>
#include <stdbool.h>

void gotoxy(int x, int y) {
    COORD coord = {0, 0};
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void textattr(int i) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}
// Structure for employee data
struct Emp {
    int id;
    char name[30];
    int salary;
};

// Function to check for duplicate ID

bool duplicateID(struct Emp employee[], int count, int id) {
    int i;
    for ( i = 0; i < count; i++) {
        if (employee[i].id == id) {
            return true;
        }
    }
    return false;
}
// Function to add a new employee
void addEmployee(struct Emp employee[], int *employeeCount) {
    if (*employeeCount < 3) {
        int id, salary;
        char name[30];
        printf("\nEnter employee details:\n");
        printf("ID: ");
        scanf("%d", &id);
     do{
      duplicateID==false;
        if (duplicateID(employee,*employeeCount, id)) {
            printf("Employee with this ID already exists.\n");
           printf("please enter id again.\n");
           scanf("%d", &id);
        }
     }while (duplicateID(employee,*employeeCount, id)==true);

        printf("Name: ");
        scanf("%s", name);

        printf("salary: ");
        scanf("%d", &salary);
            getch();
        employee[*employeeCount].id = id;
        strcpy(employee[*employeeCount].name, name);
        employee[*employeeCount].salary = salary;

        (*employeeCount)++;
        printf("Employee added successfully.\n");
  } else {
        printf("Employee database is full. Delete some employees to add more.\n");
    }
}
// Function to display employee details
void displayEmployees(struct Emp employee[], int employeeCount) {
    if (employeeCount > 0) {
        printf("Employee Details:\n");
        int i;
        for ( i = 0; i < employeeCount; i++) {
            printf("ID: %d, Name: %s, salary: %d\n", employee[i].id, employee[i].name, employee[i].salary);
        }
    } else {
        printf("No employees to display.\n");
    }
}
// Function to delete an employee by ID or name
void deleteEmployee(struct Emp employee[], int *employeeCount, int id, char name[30], char option) {
    if (*employeeCount == 0) {
        printf("No employees to delete.\n");
        return;
    }
    int index = -1;
    if (option == 'n') { // Delete by name
            int i;
        for ( i = 0; i < *employeeCount; i++) {
            if (strcmp(employee[i].name, name) == 0) {
                index = i;
                break;
            }
                }
    } else if (option == 'i') { // Delete by ID
        int i;
        for (i = 0; i < *employeeCount; i++) {
            if (employee[i].id == id) {
                index = i;
                break;
            }
        }
    }

    if (index != -1) {
            int i;
        for ( i = index; i < *employeeCount - 1; i++) {
            employee[i] = employee[i + 1];
        }
        (*employeeCount)--;
        printf("Employee deleted successfully.\n");
    } else {
        printf("Employee not found.\n");
    }
}
int main() {
    char arr[4][10] = {"new", "display", "delete", "exit"};
    int flag = 0;
    char ch;
    int i = 0;
    int cursor = 0;

    for (i = 0; i < 4; i++) {
        gotoxy(10, 5 + i);
        printf("%s", arr[i]);
    }

    struct Emp employee[3]; // Array to store employee information
    int employeeCount = 0;


    do {
        system("cls");
        for (i = 0; i < 4; i++) {
            gotoxy(10, 5 + i);
            if (i == cursor) {
                textattr(0x27);
            }
            printf("%s", arr[i]);
            textattr(0x07);
        }
        ch = getch();
        switch (ch) {
            case 13: // Enter key
                if (cursor == 0) { // "new" option
                    addEmployee(employee, &employeeCount);
                } else if (cursor == 1) { // "display" option
                    displayEmployees(employee, employeeCount);
                    getch(); // Wait for user input to continue
                } else if (cursor == 2) { // "delete" option
                    if (employeeCount == 0) {
                        printf("No employees to delete.\n");
                    } else {
                        char deleteOption;
                        printf("Enter 'n' to delete by name or 'i' to delete by ID: ");
                        scanf(" %c", &deleteOption); // Remove any leading whitespace
                        if (deleteOption == 'n' || deleteOption == 'i') {
                            int deleteID;
                            char deleteName[30];
                            if (deleteOption == 'i') {
                                printf("Enter the ID to delete: ");
                                scanf("%d", &deleteID);
                            } else if (deleteOption == 'n') {
                                printf("Enter the name to delete: ");
                                scanf("%s", deleteName);
                            }
                            deleteEmployee(employee, &employeeCount, deleteID, deleteName, deleteOption);
                        } else {
                            printf("Invalid option for deletion. Please enter 'n' or 'i'.\n");
                        }
                    }
                } else if (cursor == 3) { // "exit" option
                    flag = 1;
                }
                break;
            case 27: // Escape key
                flag = 1;
                break;
            case -32: // Special keys
                ch = getch();
                switch (ch) {
                    case 72: // Up arrow
                        cursor--;
                        if (cursor < 0)
                            cursor = 3;
                        break;
                    case 80: // Down arrow
                        cursor++;
                        if (cursor > 3)
                            cursor = 0;
                        break;
                }
                break;
        }
    } while (flag == 0);
return 0;
}
