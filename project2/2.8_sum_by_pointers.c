#include <stdio.h>
#include <stdlib.h>

void main() {
    int num1;
    int num2;
    int sum;
    int *pointer1;
    int *pointer2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    pointer1 = &num1;
    pointer2 = &num2;
    sum = *pointer1 + *pointer2;
    printf("sum: %d\n", sum);

}   
