#include <stdio.h>
#include <math.h>

long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, i;
    float x, term, sum = 0.0;
    printf("\nPractical 11, 04814902024, Apurva Kumar\n");
    printf("Enter the value of X: ");
    scanf("%f", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        int power = 2 * i - 1;
        term = (float)pow(x, power) / factorial(power);
        if (i % 2 == 0) {
            sum -= term;
        } else {
            sum += term;
        }
    }
    printf("Sum of the series = %.4f\n\n", sum);
    return 0;
}