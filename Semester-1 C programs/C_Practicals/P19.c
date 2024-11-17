#include <stdio.h>

int main() {
    int n;
    printf("\nPractical 19, 04814902024, Apurva Kumar\n");
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Printing elements using pointer....\n");
    int* ptr = arr;
    for (int i = 0; i < n; i++) {
        printf("%d\n", *(ptr + i));
    }
    printf("\n");
    return 0;
}