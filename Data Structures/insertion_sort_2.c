#include <stdio.h>
int main() {
    int arr[] = {4, 1, 5, 2, 3};
    int len = sizeof(arr) / sizeof(int);
    for (int i = 1; i < len; i++) {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr) {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
    for (int i = 0; i < len; i++) {
        printf("%d, ", arr[i]);
    }
}