#include <stdio.h>
#include <stdlib.h>

int main()
{
   int rows,cols;
   printf("plz enter numbers of rows");
   scanf("%d",&rows);
    printf("plz enter numbers of cols");
   scanf("%d",&cols);
   int**ptr=(int**)malloc(rows*sizeof(int*));
   if(ptr!=NULL){
   int i,j;
   for(i=0;i<rows;i++)
            ptr[i]=(int*)malloc(cols*sizeof(int));
    printf("plz enter rows and cols");
   for(i=0;i<rows;i++){
    for(j=0;j<cols;j++)
    scanf("%d",&ptr[i][j]);
   }
    for(i=0;i<rows;i++){
    for(j=0;j<cols;j++)
    printf("%d",ptr[i][j]);
    printf("\n");
   }
   for(i=0;i<rows;i++)
    free(ptr[i]);
   free(ptr);
   }



    return 0;
}
