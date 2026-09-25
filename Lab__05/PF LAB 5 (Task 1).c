/* Porgramer: Abdul Hayee Kamboh
Section: BSAI-1A
Roll No#: 26k-0026
*/
#include <stdio.h>
int main(){
	// Enter Marks Of The Following Subject //
	int Programming, Mathematics, AI, Attendance ;
	float Average;
	printf("Enter the Marks Of Programming, Mathematic, AI and Attendance: ");
	scanf("\n%d \n%d \n%d \n%d", &Programming, &Mathematics, &AI, &Attendance);
	printf("\nThe Marks Of Programming Is: %d", Programming);
	printf("\nThe Marks Of Mathematic Is: %d", Mathematics);
	printf("\nThe Marks Of AI Is: %d", AI);
	printf("\nThe Marks Of Attendance Is: %d", Attendance);
	if (Programming >= 50){
	    printf("\nStudent Is Eligible");
	}
	else{
	    printf("\nNot Eligible");
	    return 0;
	}
	if (Mathematics >= 50){
	    printf("\nStudent Is Eligible");
	}
	else{
	    printf("\nNot Eligible");
	    return 0;  
	}
	if (AI >= 50){
	    printf("\nStudent Is Eligible");
	}
	else{
	    printf("\nNot Eligible");
	    return 0; 
	}
	if (Attendance >= 75){
	    printf("\nStudent Is Eligible");
	}
	else{
	    printf("\nNot Eligible");
	    return 0; 
	} 
	// Calculating Average //
	Average = (Mathematics + Programming + AI)/3;
	printf("\nAverage = %2f%%", Average);
	if (Average >= 80){
	    printf("\nExcellent Performance");
	}
	else if (Average >= 70){
	    printf("\nVery Good Performance");
	}
	else if (Average >= 60){
	    printf("\nGood Performance");
	}
	else if (Average >= 50){
	    printf("\nSatisfactory Performance");
	}
	else if (Average < 50){
	    printf("\nPoor Performance");
	}
    return 0;
}
