#include <stdio.h>

int main() {    
    printf("Up to how many terms of the Fibonacci series: ");
    int n;
    scanf("%d", &n);
    
    if (n < 1) {
        printf("Enter a positive number greater than 0!");
    } 
    else if (n == 1) {
        printf("0");
    } 
    else if (n == 2) {
        printf("0, 1");
    } 
    else {
        int x1 = 0;
        int x2 = 1;
        int x3;

        printf("0, 1");
        for (int i = 2; i < n; i++) {
            x3 = x1 + x2;
            printf(", %d", x3);
            x1 = x2;
            x2 = x3;
        }
    }
    return 0;
}
