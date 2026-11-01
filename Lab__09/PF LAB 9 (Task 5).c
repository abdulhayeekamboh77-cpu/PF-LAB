/* Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/
#include <stdio.h>
void printSensorData(void *data, char type) 
{
    if (type == 'f') 
    {
        float temp = *(float *)data;
        printf("Temperature: %.2f C\n", temp);
    } else if (type == 'i') 
    {
        int motion = *(int *)data;
        if (motion == 1) 
        {
            printf("Motion Detected\n");
        } 
        else  
        {
            printf("No Motion\n");
        }
    } 
    else if (type == 'c') 
    {
        char door = *(char *)data;
        if (door == 'O')
        {
            printf("Door Open\n");
        } 
        else if (door == 'C')
        {
            printf("Door Closed\n");
        }
    }
}
int main() {
    float temperature = 24.5f;
    int motionStatus = 1;
    char doorStatus = 'O';
    printSensorData(&temperature, 'f');
    printSensorData(&motionStatus, 'i');
    printSensorData(&doorStatus, 'c');
    return 0;
}
