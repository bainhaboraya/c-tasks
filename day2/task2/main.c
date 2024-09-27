#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch ;
    int flag=0;
    do{

    printf("\n New \n Display \n Exit");
    ch= getch();
    switch(ch){
    case 'n':

        printf("\n New selected");
        break;
    case 'd':
    case 'D':
        printf("\n Display selected");
        break;
    case 'e':
    case 'E':
        printf("\n Exit");
        flag=1;
        break;
    case 27:
        flag=1;
        break;
    }
    }
    while (flag==0);
    return 0;
}
