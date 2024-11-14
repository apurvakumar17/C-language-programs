#include <stdio.h>

int main(){
    int num1,num2,num3;
    printf("Enter the num1: ");
    scanf("%d",&num1);
    printf("Enter the num2: ");
    scanf("%d",&num2);
    printf("Enter the num3: ");
    scanf("%d",&num3);
    int largest=num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
    printf("Largest of three nums are: %d",largest);
    return 0;
}