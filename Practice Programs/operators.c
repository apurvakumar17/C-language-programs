#include <stdio.h>
int main(){
    int a;
    int b;
    printf("Enter 1st digit: ");
    scanf("%d",&a);
    printf("Enter 2nd digit: ");
    scanf("%d",&b);
    printf("Addition: %d\n",a+b);
    printf("Subtraction: %d\n",a-b);
    printf("Multiplication: %d\n",a*b);
    printf("Division: %d\n",a/b);
    printf("Remainder: %d\n",a%b);
    printf("%d \n",a>b);
    printf("Bitwise-And = %d\n",a&b);
    printf("Bitwise-Or= %d\n",a|b);
    printf("Bitwise-Xor= %d\n",a^b);

    return 0;
}