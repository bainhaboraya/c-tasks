#include <stdio.h>
#include <stdlib.h>

int main() {
    int num,reversedNum=0 , remainder=0;

    printf("Enter the number: ");
    scanf("%d", &num);

    while(num !=0) {
        remainder = num % 10;
        reversedNum=reversedNum*10+remainder;
        num/=10;

    }
    printf("the reversed number is: %d",reversedNum);



    return 0;
}
