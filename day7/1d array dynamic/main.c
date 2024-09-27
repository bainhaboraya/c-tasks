#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("plz enter the size\n");
    scanf("%d",&size);
    int*arr=malloc(size*sizeof(int));
    if(arr!=NULL){
            int i;
       printf("plz enter the numbers");
       for(i=0;i<size;i++)
        scanf("%d",arr+i);
        for(i=0;i<size;i++){
        printf("%d\n",*(arr+i));

        }
        free(arr);
    }
    return 0;
}
