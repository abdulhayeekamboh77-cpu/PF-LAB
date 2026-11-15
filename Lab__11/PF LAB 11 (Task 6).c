/* Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/
#include <stdio.h>
#include <string.h>
#define TOLL_RATE 50
void processVehicle(const char vehicleType[]) 
{
    static int totalVehicles = 0;
    static int totalRevenue = 0;
  
    if (strcmp(vehicleType, "REPORT") == 0) 
    {
        printf("\n-----------------------------------\n");
        printf("      FINAL TOLL PLAZA COLLECTION REPORT \n");
        printf("-------------------------------------\n");
        printf("Total Vehicles Processed : %d\n", totalVehicles);
        printf("Fixed Toll Rate          : %d PKR\n", TOLL_RATE);
        printf("Total Revenue Collected  : %d PKR\n", totalRevenue);
        printf("-------------------------------------\n");
        return;
    }
    totalVehicles++;
    totalRevenue += TOLL_RATE;
    printf("Vehicle Processed: %-12s | Fee: %d PKR | Cumulative Vehicles: %d\n", 
           vehicleType, TOLL_RATE, totalVehicles);
}

int main() {
    printf("-----------------------------------------\n");
    printf("       AUTOMATED HIGHWAY TOLL BOOTH      \n");
    printf("-----------------------------------------\n");
    printf("Immutable Toll Rate: %d PKR per vehicle\n\n", TOLL_RATE);

    printf("--- Simulating Vehicle Processing Events ---\n");
    processVehicle("Car");
    processVehicle("Motorcycle");
    processVehicle("Truck");
    processVehicle("Car");
    processVehicle("Bus");
    processVehicle("Mini-Van");
    processVehicle("REPORT");
    return 0;
}
