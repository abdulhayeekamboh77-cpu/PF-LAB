/* Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/

#include <stdio.h>
int main() {
    char student_names[3][50];
    int marks[3][3];
    int i, j, sum;
    float average;
    
    for (i = 0; i < 3; i++) {
        printf("Enter full name of student %d: ", i + 1);
        scanf(" %49[^\n]", student_names[i]);
        for (j = 0; j < 3; j++) {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    printf("\nStudent Report\n");
    printf("%-25s %-10s\n", "Student Name", "Average");
    printf("\n");
    for (i = 0; i < 3; i++) {
        sum = 0;
        for (j = 0; j < 3; j++) {
            sum = sum + marks[i][j];
        }
        average = sum / 3.0;
        printf("%-25s %-10.2f\n",
        student_names[i], average);
    }
    return 0;
}
