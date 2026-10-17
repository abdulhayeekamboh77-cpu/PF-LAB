/***Programmer:** Abdul Hayee Kamboh
**Roll No:** 26K-0026
**Section:** BSAI-1A*/
#include <stdio.h>
int main()
{
    char Name[20];
    printf("Enter Your Name: ");
    scanf("%19s", &Name);
    
    int Age;
    
    printf("\nEnter Age: ");
    scanf("%d", &Age);
    
    char City[20];
    
    printf("\nEnter Your City Name: ");
    scanf("%19s", &City);
    
    printf("\nName: %s", Name);
    printf("\nAge: %d", Age);
    printf("\nCity Name: %s", City);
    return 0;
}
