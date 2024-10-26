#include <stdio.h>

int main() {
    int a, b, c, largest;
    printf("\nPractical 3, 04814902024, Apurva Kumar\n");
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("The largest number is: %d\n\n", largest);
    return 0;
}