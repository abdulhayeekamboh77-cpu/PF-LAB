/*Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/

#include <stdio.h>
#include <string.h>
int main() 
{
    char user[50], pass[50];
    char fileUser[50], filePass[50];
    printf("Enter Username: ");
    scanf("%49s", user);
    printf("Enter Password: ");
    scanf("%49s", pass);

    FILE *fptr = fopen("credentials.txt", "r");
    if (fptr == NULL) 
    {
        printf("Error: credentials file not found!\n");
        return 1;
    }
  
    fscanf(fptr, "%49s %49s", fileUser, filePass);

    if (strcmp(user, fileUser) == 0 && strcmp(pass, filePass) == 0)
        printf("Access Granted!\n");
    else
        printf("Access Denied!\n");
    fclose(fptr);
    return 0;
}
