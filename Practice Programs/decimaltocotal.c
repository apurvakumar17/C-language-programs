#include <stdio.h>

int main(){
    int deci=0;
    printf("Enter decimal number: ");
    scanf("%d",&deci);
    int oct=0;
    while (deci>8){
        int rem=deci%8;   
        deci=deci/8;      
        oct=oct*10+rem;
    }
    oct=oct*10+deci;
    int rev=0;
    while (oct!=0){
        rev=rev*10+oct%10;
        oct=oct/10;
    }
    printf("Octal Number: %d",rev);
    return 0;
}