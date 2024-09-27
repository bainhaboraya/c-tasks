#include <stdio.h>
#include <stdlib.h>
int factorial(int x );
int main()
{
    int number;
    printf("please enter the number:\n");
    scanf("%d",&number);
    int result= factorial(number);
    printf("the factorial is %d",result);



    return 0;
}
int factorial( int x ){
    int i;
    int facto=1;
 for( i=1;i<=x;i++){
        facto*=i;
    }


   return facto;

}
