#include <stdio.h>

int main() {
    int arr[] = {10, 20, 36, 72, 45, 36};
    int *a, *b;
    a = &arr[4];
    b = arr+4;
    if (a == b) {
        printf("Same pointers");
    } else {
        printf("Different pointers");
    }
    return 0;
}