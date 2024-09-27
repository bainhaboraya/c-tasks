#include <stdio.h>

int main() {
    int number;
printf("please enter the number\n");
scanf("%d",&number);
printf("the numbers from 0 to %d",number);

    int i;

    for ( i = 2; i <= number; i++) {
        int isPrime = 1;
          int j;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }



    printf("\n");

}

