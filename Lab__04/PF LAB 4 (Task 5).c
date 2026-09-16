#include <stdio.h>
int main()
{
    int Role, Status, Security;
    printf("Enter User Role (1=Admin, 2=Resercher, 3=Student): ");
    scanf("%d", &Role);
    
    printf("Enter Status (1=Active, 2=Inactive): ");
    scanf("%d", &Status);
    
    printf("Enter Security Level: ");
    scanf("%d", &Security);
    
    if(Status==0){
        printf("Access Denied");
    }
    else if(Role==1 && Security >= 3){
        printf("Admin Access");
    }
    else if(Role==2 && Security >= 2){
        printf("Researcher Access");
    }
    else if(Role==3 && Security >= 1){
        printf("Student Access");
    }
    else
    printf("Access Denied");
    return 0;
}