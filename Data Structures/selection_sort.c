#include <stdio.h>
void show(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {4, 1, 8, 7, 5, 2, 3};
    int i, j, len = sizeof(arr) / sizeof(int), least_index, temp;
    for (i = 0; i < len; i++) {
        least_index = i;
        for (j = i; j < len; j++) {
            if (arr[j] <= arr[least_index]) {
                least_index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[least_index];
        arr[least_index] = temp;
    }
    show(arr, len);
}