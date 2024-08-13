#include <stdio.h>

int main(){
    int num1,num2=0;
    printf("Enter the 1st number: ");
    scanf("%d",&num1);
    printf("Enter the 2nd number: ");
    scanf("%d",&num2);
    int x;
    for (x=2;x<=num1*num2;x++){
        if (num1%x==0 && num2%x==0){
            printf("%d is the LCM of %d and %d",x,num1,num2);
            break;
        }
    }
    return 0;
}