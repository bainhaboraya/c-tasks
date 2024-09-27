#include <stdio.h>
#include <stdlib.h>
struct person {
   int age;
   char name[30];
};

int main()
{
   struct person *ptr;
   int i, n;

   printf("Enter the number of persons: ");
   scanf("%d", &n);


    ptr = (struct person*) malloc(n * sizeof(struct person));

   for(i = 0; i < n; ++i)
   {
       printf("Enter  name and age : ");

       scanf("%s %d", (ptr+i)->name, &(ptr+i)->age);
   }

   printf(" Information:\n");
   for(i = 0; i < n; ++i)
       printf("Name: %s\tAge: %d\n", (ptr+i)->name, (ptr+i)->age);

   return 0;
}

