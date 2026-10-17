/*Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/

#include <stdio.h>
int main() {
    int n, i;
    int fact_2n = 1, fact_n1 = 1, fact_n = 1;
    int catalan;

    printf("Enter n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= 2 * n; i++) {
        fact_2n = fact_2n * i;
    }

    for (i = 1; i <= n + 1; i++) {
        fact_n1 = fact_n1 * i;
    }

    for (i = 1; i <= n; i++) {
        fact_n = fact_n * i;
    }

    catalan = fact_2n / (fact_n1 * fact_n);

    printf("Catalan number C(%d) = %d\n", n, catalan);

    return 0;
}
