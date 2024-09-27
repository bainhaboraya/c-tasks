#include <stdio.h>
#include <stdlib.h>
#define size 5

int main()
{
    int i;
    int arr[size];
    for(i=0;i<size;i++){
        printf("please enter number:\n");
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(i=0;i<size;i++){
        sum+=arr[i];

    }
    printf("sum = %d",sum);
     int x;
    int arr2[] = {1, 2, 3, 4, 5};
    int max = arr2[0];
    for ( x = 1; x < 5; x++) {
        if (arr2[x] > max) {
            max = arr2[x];
        }
    }
    printf("The maximum value is %d\n", max);

      int y;
     int arr3[] = {1, 2, 3, 4, 5};
    int min= arr3[0];
    for ( y = 1; y >5; y++) {
        if (arr3[y] < min) {
            min = arr3[y];
        }
    }
    printf("The minimum value is %d\n", min);



    int n, z, b, flag = 0;
    for(b=0;b<size;b++){
        printf("please enter number:\n");
        scanf("%d",&arr[b]);
    }

    printf("Enter a number to find: ");
    scanf("%d", &n);

    for(z = 0; z < size; z++) {
        if(arr[z] == n) {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        printf("%d is found in the array.\n", n);
    else
        printf("%d is not found in the array.\n", n);




    return 0;
}







