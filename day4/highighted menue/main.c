#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define null -32

 void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }


void textattr(int i)
{
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}
int main(){
    char items[3][10]={"new","display","exit"};
    int i;
    char ch;
    int cursur=0;
     int flag=0;
     do{
system("cls");
    for(i=0;i<3;i++){
        gotoxy(10,5+i);
        if(i==cursur){
            textattr(0x27);
        }
        printf("%s",items[i]);
        textattr(0x07);
    }   ch=getch();
    switch(ch){
        case 27:
       flag=1;
       break;
        case 13: //enter
          system("cls");
            if(cursur==2)
                flag=1;
                else{

            printf("%s",items[cursur]);
            getch();
                }
            break;

    case -32:
        ch=getch();
        switch(ch){
        case 72://up
            cursur--;
            if(cursur<0)
                cursur=2;
            break;
        case 71://down
            cursur=0;
            break;
        case 80:
            cursur++;
            if(cursur>2)
                cursur=0;
            break;
        case 79:
            cursur=2;
        }

    }
     }
     while(flag==0);

    return 0;

}
