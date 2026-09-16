#include <stdio.h>
int main()
{
    int cfs;
    printf("Enter Confidence Score: ");
    scanf("%d", &cfs);
    if(cfs < 0 || cfs > 100){
        printf("\nScore Is Invalid");
    }
    else if(cfs >= 0 && cfs <= 49){
        printf("Low Confidence");
    }
    else if(cfs >= 50 && cfs <= 79){
        printf("Moderate Confidence");
    }
    else if(cfs >= 80 && cfs <= 100){
        printf("High Confidence");
    }
    return 0;
}