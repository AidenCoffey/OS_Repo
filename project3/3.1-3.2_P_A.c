#include <stdio.h>

void main(){
    int myNumbers[4] = {25,50,75,100};

    printf("%p\n", myNumbers);
    printf("%p\n", myNumbers[1]);

    for (int i = 0; i < 4; i++){
        printf("%p\n", &myNumbers[i]);
    }

    //print lal element on a line using for loop and pointer
    for (int i = 0; i < 4; i++){
        printf("%d  ", (myNumbers[i]));
    }
}
