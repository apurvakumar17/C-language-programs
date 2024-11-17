#include <stdio.h>

void check_equal(int a, int b) {
    if ((a ^ b) == 0) {
        printf("The numbers %d and %d are equal.\n", a, b);
    } else {
        printf("The numbers %d and %d are not equal.\n", a, b);
    }
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Check if numbers are equal
    check_equal(num1, num2);

    return 0;
}
