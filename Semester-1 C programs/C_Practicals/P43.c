#include <stdio.h>
#define VALUE 10

int main() {
    printf("\nPractical 43, 04814902024, Apurva Kumar\n");
    printf("Conditional Compilation Example\n");

    #if VALUE > 15
        printf("VALUE is greater than 15\n\n");
    #else
        printf("VALUE is less than or equal to 15\n\n");
    #endif

    return 0;
}