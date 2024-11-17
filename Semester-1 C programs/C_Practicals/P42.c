#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("\nPractical 42, 04814902024, Apurva Kumar\n");
    int *arr = (int *)calloc(5, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Array elements after calloc (initialized to 0): ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    arr = (int *)realloc(arr, 10 * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }
    printf("Array elements after realloc: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    free(arr);
    return 0;
}