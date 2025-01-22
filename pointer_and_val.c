#include <stdio.h>
#include <stdlib.h>

void main() {
    double double_pounter = 42.50;
    int int_pointer = 42;
    char char_pointer = 'a';

    printf("pointer val: %p\n\tvalue: %f\n",&double_pounter, double_pounter);
    printf("pointer val: %p\n\tvalue: %d\n",&int_pointer, int_pointer);
    printf("pointer val: %p\n\tvalue: %c\n",&char_pointer, char_pointer);

}   
