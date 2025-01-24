#include <stdio.h>
#include <stdlib.h>

void main(){
//     int *ptr1 = malloc(size);
// int *ptr2 = calloc(amount, size);

int *students;
int num_students= 12;

students = calloc(num_students, sizeof(*students));
printf("%ld", num_students * sizeof(*students));
}
