#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int sum = 0;
    printf("\nPractical 31, 04814902024, Apurva Kumar\n");
    for (int i = 1; i < argc; i ++) {
        sum = sum + atoi(argv[i]);
    }
    printf("SUM: %d\n\n", sum);
    return 0;
}