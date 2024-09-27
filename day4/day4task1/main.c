#include <stdio.h>
#include <stdlib.h>


int main()
{
    char fname[10];
    char lname[10];
    char fullName[20]={};
    printf("please enter the fname:\n");
    gets(fname);
     printf("please enter the lname:\n");
    gets(lname);
    strcat(fullName,fname);
    strcat(fullName,lname);
    strcat(fullName," ");
    printf("the full name is %s",fullName);



    return 0;
}
