#include <stdio.h>
#include <stdlib.h>
int power( int x, int y);
int main()
{

    int result=0;
   result= power(2,3);
     printf(" %d",result);

    return 0;
}
int power(int  x,int  y){
    int a;
    int pow=1;
    for(a=1;a<=y;a++){
       pow*=x;

    }


   return pow;


}
