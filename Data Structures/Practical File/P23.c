#include <stdio.h>

int main() {
    int A[10];
    char B[10];
    printf("Enter 10 integers for array A: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }
    printf("Enter 10 characters for array B: ");
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &B[i]);
    }
    int computed_address_A = (int)(&A[0]) + 5 * sizeof(int);
    int actual_address_A = (int)(&A[5]);

    int computed_address_B = (int)(&B[0]) + 8 * sizeof(char);
    int actual_address_B = (int)(&B[8]);

    printf("\nComputed address of A[5]: %d\n", computed_address_A);
    printf("Actual address of A[5]: %d\n", actual_address_A);

    printf("\nComputed address of B[8]: %d\n", computed_address_B);
    printf("Actual address of B[8]: %d\n", actual_address_B);

    printf("\nApurva Kumar 04814902024\n");
    return 0;
}
