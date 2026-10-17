/*Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/

#include <stdio.h>
int main()
{
    char Name[15];
    
    printf("Enter Your Name: ");
    scanf("%14s", &Name);
    printf("\nName: %s", Name);
    
    int Age;
    
    printf("\nEnter Age: ");
    scanf("%d", &Age);
    printf("Age: %d", Age);
    
    float Height;
    printf("\nEnter Your Height: ");
    scanf("%f", &Height);
    printf("\nHeight: %f", Height);
    
    char Grade[5];
    
    printf("\nEnter Your Grade: ");
    scanf("%4s", &Grade);
    printf("\nGrade: %s", Grade);
    
    
    float CGPA;
    
    printf("\nEnter Your CGPA: ");
    scanf("%f", &CGPA);
    printf("\nCGPA Is: %f", CGPA);
    
    
    
    
    
    return 0;
}
