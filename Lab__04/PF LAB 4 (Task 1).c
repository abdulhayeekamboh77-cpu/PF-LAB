#include <stdio.h>
int main()
{
    int Number1;
    printf("Enter Number1: ");
    scanf("%d", &Number1);
    int Number2;
    printf("Enter Number2: ");
    scanf("%d", &Number2);
    int Number3;
    printf("Enter Number3: ");
    scanf("%d", &Number3);
    if(Number1 > Number2 && Number1 > Number3){
        printf("Number1 Is Greater");
    }
    else if(Number2 > Number1 && Number2 > Number3){
       printf("Number2 Is Greater"); 
    }
    else
        printf("Number3 Is Greater");
    return 0;
}
