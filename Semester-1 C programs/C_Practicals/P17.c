#include <stdio.h>

int fact(int a) {
    if (a <= 1) {
        return 1;
    } else {
        return a * fact(a - 1);
    }
}

int main(){
    int num;
    printf("\nPractical 17, 04814902024, Apurva Kumar\n");
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n\n", num, fact(num));
    }
    return 0;
}