#include <stdio.h>
#define STRINGIZE(x) #x
#define CONCAT(a, b) a##b
#define FLAG 1

int main() {
    printf("\nPractical 44, 04814902024, Apurva Kumar\n");
    printf("Using STRINGIZE Operator:\n");
    printf("STRINGIZE(Hello World) results in: %s\n", STRINGIZE(Hello World));
    
    int xy = 100;
    printf("\nUsing TOKENPASTING Operator:\n");
    printf("CONCAT(x, y) results in: %d\n", CONCAT(x, y));

    #if FLAG
        printf("\nConditional Compilation:\n");
        printf("FLAG is defined and non-zero, so this block is compiled.\n\n");
    #else
        printf("\nFLAG is zero or not defined, so this block is compiled.\n\n");
    #endif

    return 0;
}