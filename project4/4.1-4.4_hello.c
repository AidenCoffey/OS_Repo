#include <stdio.h>
#include <string.h>

void main(){
    FILE *file;
    file = fopen("/home/iambrink/OS_Repo/project4/hello.txt", "r");
    char my_string[100];
    while(fgets(my_string, 100, file)) {
        printf("%s", my_string);
    }
    fclose(file);
}