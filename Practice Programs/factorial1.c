#include <stdio.h>

int fact(int x) {
    if (x <= 1) {
        return 1;  
    } 
    else {
        return x * fact(x - 1);  
    }
}

int main() {
    int a;
    printf("Enter the number to find factorial of: ");
    scanf("%d", &a);
    printf("Factorial of %d is = %lld\n", a, fact(a));
    return 0;
}
