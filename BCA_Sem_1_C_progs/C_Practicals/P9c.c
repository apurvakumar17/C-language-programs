#include <stdio.h>

int main(){
    int i, j;
    printf("\nPractical 9, 04814902024, Apurva Kumar\n");
    for (i = 5; i >= 1; i --) {
        for (j = 0; j < i; j ++) {
            printf("%d", i);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}