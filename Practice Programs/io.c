#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Enter the value of 1st number: ");
    scanf("%d", &a); 
    printf("Enter the 2nd number: ");
    scanf("%d", &b);
    int c = a + b;
    printf("Result is: %d\n", c);
    
    return 0;
}
