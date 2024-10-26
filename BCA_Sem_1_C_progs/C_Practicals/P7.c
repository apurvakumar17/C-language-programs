#include <stdio.h>

int main(){
    printf("\nPractical 7, 04814902024, Apurva Kumar\n");
    int num, rev = 0, sum = 0;
    printf("Enter an positive integer: ");
    scanf("%d", &num);

    while (num != 0) {
        rev = (rev * 10) + num % 10;
        sum = sum + (num % 10);
        num = num / 10;
    }

    printf("Reversed: %d\n", rev);
    printf("Sum of its digits: %d\n\n", sum);
    return 0;
}