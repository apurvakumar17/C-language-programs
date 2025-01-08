#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1;
    int n2;
    int* factors_n1;
    int* factors_n2;
    factors_n1 = (int*) malloc(sizeof(int));
    int s1 = 0;
    factors_n2 = (int*) malloc(sizeof(int));
    int s2 = 0;
    printf("Enter number 1: ");
    scanf("%d", &n1);
    printf("Enter number 2: ");
    scanf("%d", &n2);
    for (int i = 1; i <= n1; i++) {
        if (n1 % i == 0) {
            factors_n1[s1] = i;
            s1++;
            factors_n1 = (int*) realloc(factors_n1, (s1 + 1) * sizeof(int));
        }
    }
    for (int i = 0; i < s1; i++) {
        printf("%d,", factors_n1[i]);
    }

    for (int i = 1; i <= n2; i++) {
        if (n2 % i == 0) {
            factors_n2[s2] = i;
            s2++;
            factors_n2 = (int*) realloc(factors_n2, (s2 + 1) * sizeof(int));
        }
    }
    printf("\n");
    for (int i = 0; i < s2; i++) {
        printf("%d,", factors_n2[i]);
    }

    free(factors_n1);
    free(factors_n2);
    
    return 0;
}