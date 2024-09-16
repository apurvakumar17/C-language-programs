#include <stdio.h>

int main(){
    int dig5,sum=0;
    printf("Enter a 5digit number: ");
    scanf("%d",&dig5);
    while (dig5!=0){
        sum=sum+dig5%10;
        dig5=dig5/10;
    }
    printf("Sum of digits is = %d",sum);
    return 0;
}