#include <stdio.h>
#include <string.h>

void main(){
    FILE *file;
    file = fopen("/home/iambrink/OS_Repo/project4/test.txt", "r");
    fseek(file,0,SEEK_END);

    printf("%ld\n", ftell(file));

    fclose(file);
}