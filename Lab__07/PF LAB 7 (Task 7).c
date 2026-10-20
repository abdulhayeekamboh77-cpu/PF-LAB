/* Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/

#include <stdio.h>
int main() 
{
    float sensor_data[3][4];
    int r, c, index;
    printf("Enter temperature readings for 3 days and 4 sensors:\n");
    for (r = 0; r < 3; r++) 
    {
        for (c = 0; c < 4; c++) 
        {
            scanf("%f", &sensor_data[r][c]);
        }
    }
    printf("Enter column index to delete (0 to 3): ");
    scanf("%d", &index);
    if (index < 0 || index > 3) 
    {
        printf("Invalid column index!\n");
        return 1;
    }
    for (r = 0; r < 3; r++) 
    {
        for (c = index; c < 3; c++) 
        {
            sensor_data[r][c] = sensor_data[r][c + 1];
        }
    }
    printf("\nUpdated 3x3 Sensor Data:\n");
    for (r = 0; r < 3; r++) 
    {
        for (c = 0; c < 3; c++) 
        {
            printf("%8.2f", sensor_data[r][c]);
        }
        printf("\n");
    }
    return 0;
}
