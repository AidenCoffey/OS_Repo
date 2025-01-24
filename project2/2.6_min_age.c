#include <stdio.h>
#include <stdlib.h>


void main(){
    int ages[] = {20,22,18,35,48,26,87,70};
    int length = sizeof(ages) / sizeof(ages[0]);

    int i;
    int min = 10000000;
    for (i = 0; i< length; i++){
        if (ages[i] < min){
            min = ages[i];
        }
    }
    printf("%d", min);
}
