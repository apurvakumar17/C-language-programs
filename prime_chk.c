#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Entered number is not prime\n");
        return 0;
    }
    int isPrime = 1;
    for (int i = 2; i < (num - 1); i++) {
        if (num % i == 0) {
            isPrime = 0; 
            break;
        }
    }
    if (isPrime) {
        printf("Entered number is a prime number\n");
    } else {
        printf("Entered number is not prime\n");
    }
    return 0;
}
