#include <stdio.h>
#include <stdlib.h>

void FtoC(float temp){
    printf("%.2f\n", (temp-32) * 5/9);
}

void area(float l, float h){
    printf("%.2f\n", l*h);
}

void circle_area(float r){
    printf("%.2f\n", 3.14 * r * r);
}

int main() {
    FtoC(60);
    area(4,2);
    circle_area(4);
    return 0;
}   
