/* Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/
#include <stdio.h>
struct Address 
{
    char City[50];
    int ZipCode;
    char State[50];
};
struct Student {
    char RollNo[20];
    char Name[50];
    float CGPA;
    struct Address studentAddress;
};

int main() 
{
    struct Student student1 = 
	{
        "26K-0026",
        "Abdul Hayee Kamboh",
        3.85,
        { "Mehrabpur", 67000, "Sindh" }
    };
    printf("=== University Student Profile System ===\n\n");
    printf("Student Information:\n");
    printf("-----------------------------------------\n");
    printf("Roll Number : %s\n", student1.RollNo);
    printf("Name        : %s\n", student1.Name);
    printf("CGPA        : %.2f\n", student1.CGPA);
    printf("\nResidential Address:\n");
    printf("-----------------------------------------\n");
    printf("City        : %s\n", student1.studentAddress.City);
    printf("Zip Code    : %d\n", student1.studentAddress.ZipCode);
    printf("State       : %s\n", student1.studentAddress.State);
    printf("-----------------------------------------\n");
    return 0;
}
