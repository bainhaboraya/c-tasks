#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    printf("please enter number \n");
    scanf("%d",&grade);
    }
    if(grade>=85)
        printf("your rating is excellent");
    else if( grade>=75 && grade<85)
        printf("your rating is very good");
    else if(grade>=65 && grade<75)
        printf("your rating is good");
    else if(grade>=50 && grade<65)
        printf("your rating is normal");
    else
        printf("failed");
    return 0;
}
