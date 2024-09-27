#include <stdio.h>
#include <stdlib.h>
void cal(int *num1,int *num2,int *sum,int *sub,int *multi);
int main()
{
    int sum=0;
    int sub=0;
    int multi=0;
    int a,b;
    printf("please enter first number:\n");
    scanf("%d",&a);
    printf("please enter second number:\n");
    scanf("%d",&b);
    cal(&a,&b,&sum,&sub,&multi);
    printf("sum a,b:%d+%d = %d\n",a,b,sum);
    printf("sub a,b:%d-%d = %d\n",a,b,sub);
    printf("multi a,b:%d*%d = %d\n",a,b,multi);

    return 0;
}
void cal(int *num1,int *num2,int *sum,int *sub,int *multi){

*sum= *num1 + *num2;
*sub= *num1  - *num2;
*multi= *num1 * *num2;
}
