#include <stdio.h>
#include <stdlib.h>
void swap(int* x ,int* y);
void main()
{
  int num1;
  printf("enter number 1");
  scanf("%d",&num1);
  int num2;
  printf("enter number 2");
  scanf("%d",&num2);
  swap(&num1,&num2);
  printf("the swap is%d :%d ",num1,num2);

    return 0;
}
void swap(int* x ,int* y){
 int temp=*  x;
 * x=* y;
  * y=temp;
}
