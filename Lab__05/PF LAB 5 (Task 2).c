/* Porgramer: Abdul Hayee Kamboh
Section: BSAI-1A
Roll No#: 26k-0026
*/
#include <stdio.h>
int main(){
    int Age, Monthlyincome, Creditscore;
    char Loanstatus[4];
    printf("Enter Age: ");
    scanf("%d", &Age);
    printf("\nEnter Monthlyincome: ");
     scanf("%d", &Monthlyincome);
    printf("\nEnter Creditscore: ");
    scanf("%d", &Creditscore);
    printf("\nEnter Loanstatus (Yes/No): ");
    scanf("%3s", &Loanstatus);
    if (Age >= 21){
    	if (Monthlyincome >= 100000){
    		if (Creditscore >= 750){
    			printf("\nNo Existing Loan");
    		}
		}
	}
	if (Monthlyincome >= 75000){
		if (Creditscore >= 650){
			printf("Existing Loan");	
		}   	
	}
	if (Monthlyincome >= 50000){
		if (Creditscore >= 600){
			printf("\nRejected: ");
				printf("\nDoes Not Meet Any Of the Above Criteria"); 	
		}
	}	
    return 0;
}
