#include <stdio.h>
#include <stdlib.h>

int main()
{
     int grade;
    printf("please enter number \n");
    scanf("%d",&grade);

    if(grade>90 && grade<100)
        printf("your rating is excellent");
    else if( grade>80 && grade<90)
        printf("your rating is very good");
    else if(grade>70 && grade<80)
        printf("your rating is good");
    else if(grade>60 && grade<70)
        printf("your rating is normal");
    else if (grade>0 && grade<60)
        printf("failed");
    else
        printf("not available");

    return 0;
}
