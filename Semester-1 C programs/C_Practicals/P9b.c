#include <stdio.h>

int main(){
    int i, j;
    printf("\nPractical 9, 04814902024, Apurva Kumar\n");
    for (i = 1; i <= 5; i ++) {
        for (j = 1; j <= i; j ++) {
            printf("%d", j);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}