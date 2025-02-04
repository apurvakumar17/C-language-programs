#include <stdio.h>
void show(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {1,10,32,50};
    int arr2[] = {2,12,60};
    int n1 = sizeof(arr1) / sizeof(int);
    int n2 = sizeof(arr2) / sizeof(int);
    int result[n1 + n2];
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            result[k] = arr1[i];
            k++;
            i++;
        } else {
            result[k] = arr2[j];
            k++;
            j++;
        }
    }
    if (j == n2) {
        for (;i < n1; i++) {
            result[k] = arr1[i];
            k++;
        }
    }
    if (i == n1) {
        for (;j < n2; j++) {
            result[k] = arr2[j];
            k++;
        }
    }
    show(result, n1 + n2);
    return 0;
}