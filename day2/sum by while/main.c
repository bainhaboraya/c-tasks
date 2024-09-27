#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , sum;
    while(sum<100){
        printf("please enter the value");
        scanf("%d",&x);
        sum+=x;
        printf("%d",sum);

    }
    return 0;
}
