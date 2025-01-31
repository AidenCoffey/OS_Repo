#include <stdio.h>
#include <stdlib.h>
void main(){

    int *grades;
    int students;
    FILE *fptr;

    printf("How many students: \n");
    scanf("%d", &students);

    grades = calloc(students, sizeof(*grades));

    // Open a file in writing mode
    fptr = fopen("project4/gradeMemory.txt", "w");

    for (int i = 0; i < students; i++)
    {
        printf("Set Score for student %d\n", i + 1);
        scanf("%d", &grades[i]);
    }


    for (int i = 0; i < students; i++)
    {
        fprintf(fptr, "Student #%d got a grade of %d\n",i+1, grades[i]);

    }
    fclose(fptr);
    free(grades);
}