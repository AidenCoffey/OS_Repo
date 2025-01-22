#include <stdio.h>

void myfunction(char name[], int age){
    printf("hello %s, you are %d years old\n", name, age);
}

int main(){
    myfunction("liam", 3);
    myfunction("vlad", 21);
    myfunction("kennedy", 21);
    return 0;
}