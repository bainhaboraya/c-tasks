#include <stdio.h>
#include <stdlib.h>
int flag=0;
int main()
{
    int i;
    int num;
    printf("please enter the number \n");
    scanf("%d",&num);
    for(i=2;i<num;i++){
        if(num%i==0){
           printf("not prime");
           flag=1;
        }

        }
      if(flag==0)
        printf("prime");

    return 0;
}
