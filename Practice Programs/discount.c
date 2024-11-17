#include <stdio.h>
int main(){
    int amount ;
    int discount ;
    printf("Enter your amount: ");
    scanf("%d",&amount);
    discount=(amount>=1000)?amount*0.3:0;
    printf("\nDiscount given=%d",discount);
    printf("\nFinal amount to be paid is: %d",amount-discount);
    return 0;
    
}