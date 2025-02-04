#include <stdio.h>
void show(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {4, 1, 5, 2, 3};
    int key, i, j, len = sizeof(arr) / sizeof(int);
    for (i = 0; i < len; i++) {
        key = arr[i];

        for (j = i - 1; j >= 0 && arr[j] > key; j--) {
            arr[j + 1] = arr[j];
        }

        arr[j + 1] = key;
        show(arr, len);
    }
    show(arr, len);
    return 0;
}