/*Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/

#include <stdio.h>
int main() 
{
    int rollNo;
    char name[50];
    float marks;
    FILE *fptr = fopen("marks.txt", "r");
  
    if (fptr == NULL) 
    {
        printf("Error: File Not Found!\n");
        return 1;
    }
    printf("%-10s %-20s %-10s\n", "Roll No", "Name", "Marks");
    printf("----------------------------------------\n");
    while (fscanf(fptr, "%d %49s %f", &rollNo, name, &marks) == 3) 
    {
        printf("%-10d %-20s %-10.2f\n", rollNo, name, marks);
    }
    fclose(fptr);
    return 0;
}
