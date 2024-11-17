#include <stdio.h>

int main(){
    int divisor;
    int dividend;
    printf("Enter the dividend: ");
    scanf("%d",&dividend);
    printf("Enter the divisor: ");
    scanf("%d",&divisor);
    printf("Quotient: %d",dividend/divisor);
    printf("\nRemainder: %d",dividend%divisor);
    return 0;
}