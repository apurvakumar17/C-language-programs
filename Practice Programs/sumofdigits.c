#include <stdio.h>

int main(){
    int num;
    int sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num>0){
        sum=sum+num%10;
        num=num/10;
    }
    printf("Sum of digits= %d",sum);
    return 0;
}