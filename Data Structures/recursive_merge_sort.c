#include <stdio.h>
void merge(int *arr, int start, int mid, int end) {
    int i = start;
    int j = mid + 1;
    int subarr[(end - start) + 1];
    int subai = 0;
    while (i <= mid && j <= end) {
        if (arr[i] < arr[j]) {
            subarr[subai++] = arr[i++];
        } else {
            subarr[subai++] = arr[j++];
        }
    }
    while (i <= mid) {
        subarr[subai++] = arr[i++];
    }
    while (j <= end) {
        subarr[subai++] = arr[j++];
    }
    
    subai = 0;
    for (int k = start; k <= end; k++) {
        arr[k] = subarr[subai++];
    }
}
void mergesort(int *arr,int start, int end) {
    int mid = (start + end) / 2;
    if (start != end) {
        mergesort(arr, start, mid); //left
        mergesort(arr, mid + 1, end); //right
        merge(arr, start, mid, end); //merge the sorted part of array
    }

}
int main() {
    int arr[] = {4, 1, 5, 2, 3}, temp;
    int len = sizeof(arr) / sizeof(int);

    mergesort(arr, 0, len - 1);

    for (int i = 0; i < len; i++) {
        printf("%d, ", arr[i]);
    }
}