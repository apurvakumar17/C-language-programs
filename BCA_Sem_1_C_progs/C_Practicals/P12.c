#include <stdio.h>

int main() {
    int n = 20; 
    int first = 0, second = 1, next;
    printf("\nPractical 12, 04814902024, Apurva Kumar\n");
    printf("First 20 numbers of the Fibonacci series:\n");

    for (int i = 1; i <= n; i++) {
        printf("%d ", first); 
        next = first + second;
        first = second; 
        second = next; 
    }
    printf("\n\n");
    return 0;
}