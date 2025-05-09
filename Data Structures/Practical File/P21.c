#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    int sum = 0;
    while (fact > 0) {
        sum += fact % 10;
        fact /= 10;
    }
    printf("Sum of digits of %d! is %d\n", n, sum);
    printf("\nApurva Kumar 04814902024\n");
    return 0;
}
