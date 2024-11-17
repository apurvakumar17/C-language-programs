#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 12, 6, 24, 8, 9};
    int *a = &arr[4];
    int *b = &arr[6];
    printf("Pointer Difference = %d\nPointed Value Difference = %d", a - b, *a - *b);
    return 0;
}