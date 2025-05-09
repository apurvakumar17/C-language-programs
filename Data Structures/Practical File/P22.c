#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    printf("Sum of multiples of 3 or 5 below %d is %d\n", n, sum);
    printf("\nApurva Kumar 04814902024\n");
    return 0;
}
