#include <stdio.h>

int fibo(int);

int main() {
    int n;
    printf("Enter a number of terms need of fibonacci series: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d, ", fibo(i));
    }
    return 0;
}

int fibo(int n) {
    if (n == 1) {
        return 0;
    }
    if(n == 2) {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}