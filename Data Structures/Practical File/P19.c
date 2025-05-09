#include <stdio.h>
int main() {
    int arr[] = {99, 35, 46, 12, 24};
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
    printf("Sorted Array: ");
    for (int i = 0; i < len; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\nApurva Kumar 04814902024\n");
}