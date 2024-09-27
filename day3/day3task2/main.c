#include <stdio.h>
#include <stdlib.h>
#define rows 3
#define columns 4

int main()
{
    int i,j;
   int arr [rows][ columns]={0};
   for (i=0;i<rows;i++)
   {
       for (j=0;j< columns;j++)
   {
         printf (" \n please enter number [%d] [%d]= ",i,j);

          scanf ("%d",&arr[i][j]);
   }
   }
 for (i=0;i<rows;i++)
   {
       for (j=0;j< columns;j++)
   {
           printf("%d \t",arr[i][j]);
   }
   printf("\n");
   }

   int sum[rows]={0};
    int sum2[columns]={0};

 for (i=0;i<rows;i++)
   {
       for (j=0;j< columns;j++)
   {
       sum[i]+=arr[i][j];
   }
           printf("\n sum is  %d",sum[i]);
   }

            float avg[columns]={0};
            for(j=0;j< columns;j++)
            {
                for (i=0;i<rows;i++)
            {
                avg[j]+=arr[i][j];
            }
            avg[j]=avg[j]/columns;
            printf("\n av is  %d=%f",j+1,avg[j]);
            }



    return 0;
}
