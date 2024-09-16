#include <stdio.h>

int main(){
    int amt,n10,n50,n100;
    printf("Enter the amount to withdraw: ");
    scanf("%d",&amt);
    while (amt>9){
        n100=amt/100;
        amt=amt-n100*100;
        n50=amt/50;
        amt=amt-n50*50;
        n10=amt/10;
        amt=amt-n10*10;
    }
    printf("100 notes: %d\n",n100);
    printf("50 notes: %d\n",n50);
    printf("10 notes: %d\n",n10);
    return 0;
}