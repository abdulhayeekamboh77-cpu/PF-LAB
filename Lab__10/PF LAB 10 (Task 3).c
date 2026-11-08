/*Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/

#include <stdio.h>
#include <string.h>
int main() 
{
    char email[100], domain[100];
    printf("Enter email address: ");
    scanf("%99s", email);
    char *at = strchr(email, '@');
    if (at == NULL) 
    {
        printf("Invalid Email Format\n");
    } 
    else 
    {
        strcpy(domain, at + 1);
        printf("Domain: %s\n", domain);
    }
    return 0;
}
