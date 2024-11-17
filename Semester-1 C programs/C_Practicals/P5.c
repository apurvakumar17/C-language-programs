#include <stdio.h>

int main() {
    int num, originalNum, remainder, result;
    printf("\nPractical 5, 04814902024, Apurva Kumar\n");
    printf("Armstrong numbers between 1 and 500 are:\n");

    for (num = 1; num <= 500; ++num) {
        originalNum = num;
        result = 0;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += remainder * remainder * remainder;
            originalNum /= 10;
        }

        if (result == num) {
            printf("%d ", num);
        }
    }
    printf("\n\n");
    return 0;
}
