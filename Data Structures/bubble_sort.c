#include <stdio.h>
void show(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[] = {4, 1, 5, 2, 3};
    int len  = sizeof(arr) / sizeof(int), temp;
    for (int i = len - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            show(arr, len);
        }
    }
    return 0;
}