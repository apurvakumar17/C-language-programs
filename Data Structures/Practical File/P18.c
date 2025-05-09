#include <stdio.h>
int main() {
    int A[] = {1, 10, 32, 50};
    int B[] = {2, 12, 60};
    int lenA = sizeof(A) / sizeof(int), lenB = sizeof(B) / sizeof(int);
    int merged[lenA + lenB];
    int k = 0, i = 0, j = 0;
    for (; i < lenA && j < lenB;) {
        if (A[i] < B[j]) {
            merged[k] = A[i];
            i++;
        } else {
            merged[k] = B[j];
            j++;
        }
        k++;
    }
    while (i < lenA) {
        merged[k] = A[i];
        i++;
        k++;
    }
    while (j < lenB) {
        merged[k] = B[j];
        j++;
        k++;
    }
    printf("Merged Array: ");
    for (int a = 0; a < lenA + lenB; a++) {
        printf("%d, ", merged[a]);
    }
    printf("\nApurva Kumar 04814902024\n");
    return 0;
}