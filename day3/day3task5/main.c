#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define null -32
void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}


int main()
{
int row,col,value,size;
printf("please enter size odd:");
scanf("%d",&size);

  row=1;
  col=(size+1)/2;
  value=1;

do{
    gotoxy(3*col,row);
    printf("%d",value);

    if(value%size==0)
        row=row+1;
    else{
        row=row-1;
        col=col-1;
    }
    if(row==0)
        row=size;
    if(col==0)
        col=size;
    value++;

}
    while(value<=size*size);
    return 0;
}
