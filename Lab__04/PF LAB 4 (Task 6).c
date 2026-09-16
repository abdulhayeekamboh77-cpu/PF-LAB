#include <stdio.h>
int main()
{
    int Obstacle, Person, Battery;
    printf("Enter Obstacle (1=Yes, 0=No): ");
    scanf("%d", &Obstacle);
    printf("Enter Person(1=Yes, 0=No): ");
    scanf("%d", &Person);
    printf("Enter Battery Percentage: ");
    scanf("%d", &Battery);
    
    if(Obstacle==1){
        if(Person==1){
        printf("Emergency Stop");
        } else{
        printf("Change Direction");
        }
    }    
    else{ 
        if(Battery<20){
        printf("Return To Charging Station");
        }else{
    printf("Continue Moving");
        }
    }    
        
    return 0;
}