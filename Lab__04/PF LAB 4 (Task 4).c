/*Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/

#include <stdio.h>
int main()
{
    float Accuracy, Latency;
    int Approval;
    printf("Enter Model Accuracy: ");
    scanf("%f", &Accuracy);
    
    printf("Enter Prediction Latency: ");
    scanf("%f", &Latency);

    printf("Enter Model Approval Status (1= Approved, 0= Not Approved): ");
    scanf("%d", &Approval);
    if(Accuracy < 90){
        printf("Accuracy Is Too Low");
    }
    else if(Latency <= 100){
        printf("Latency Is Too High");
    }
    else if(Approval != 1){
        printf("Model Is Not Approved");
    }
    else
    printf("Model Can't Be Deployed");
    return 0;
}
