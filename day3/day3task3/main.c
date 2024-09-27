#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,factorial=1;
    printf("please enter the number ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        factorial*=i;
    };
    printf("the factorial of number %d is %d",num,factorial);
    return 0;
}
