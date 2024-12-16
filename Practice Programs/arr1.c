#include <stdio.h>

void trav( int*, int );

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d", n);
    trav(arr, n);
}

void trav(int* a, int b) {
    for (int i = 0; i < b; i++) {
        printf("%d ", a[i]);
    }
}