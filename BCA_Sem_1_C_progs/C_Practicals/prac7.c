#include <stdio.h>

int main(){
    int num,rev=0,sum=0,x;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0){
        x=num%10;
        rev=rev*10+x;
        sum=sum+x;
        num=num/10;
    }
    printf("Reversed Number: %d\n",rev);
    printf("Sum of digits: %d",sum);
    return 0;
}