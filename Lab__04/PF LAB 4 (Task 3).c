#include <stdio.h>
int main()
{
    float percentage;
    int Tnor;
    printf("Total Number Of Records: ");
    scanf("%d", &Tnor);
    
    int Nomr;
    printf("Number Of Missing Records: ");
    scanf("%d", &Nomr);
    
    int Nodr;
    printf("Number Of Duplicate Records: ");
    scanf("%d", &Nodr);
    
    if(Tnor <= 0 ){
        printf("Invalid Dataset");
    }
    else{
        percentage=(Nomr*100.0)/Tnor;
        printf("Nomr = %.2f%%\n", percentage);
    }
    if(percentage > 30){
        printf("Poor Quality Dataset");
    }
    else if((Nodr*100.0)/Tnor > 20){
        printf("Dataset Requires Cleaning");
    }
    else
    printf("Dataset Ready For Training");
    return 0;
}