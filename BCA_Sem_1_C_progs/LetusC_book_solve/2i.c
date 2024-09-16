#include <stdio.h>

int main(){
    int dig4,sum=0;
    printf("Enter a 4 digit number: ");
    scanf("%d",&dig4);
    sum+=dig4/1000;
    sum+=dig4%10;
    printf("Sum of first and last digits = %d",sum);
    return 0;
}