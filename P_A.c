#include <stdio.h>

void main(){
    int myNumbers[4] = {25,50,75,100};

    printf("%p\n", myNumbers);

    for (int i = 0; i < 4; i++){
        printf("%p\n", &myNumbers[i]);
    }
    
}
