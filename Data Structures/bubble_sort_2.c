#include <stdio.h>
int main() {
    int arr[] = {4, 1, 5, 2, 3}, temp;
    int len = sizeof(arr) / sizeof(int);
    for (int i = len - 1; i >= 0; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < len; i++) {
        printf("%d, ", arr[i]);
    }
}