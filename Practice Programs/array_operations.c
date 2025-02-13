#include <stdio.h>

void isort(int* arr, int len) {
    int i, j, key;
    for (i = 1; i < len; i++) {
        key = arr[i];
        for (j = i; j >= 1; j--) {
            if (key > arr[j - 1]) {
                arr[j] = key;
                break;
            } else {
                arr[j] = arr[j - 1];
            }
        }
    }
}

int main() {
    int arr[] = {1,9,10,4,8,7,6,5,8,2,3};
    int len = sizeof(arr)/sizeof(int);
    isort(arr, len);

    int avg = 0, min = arr[0], max = arr[0], mode = arr[0];
    int evenCount = 0, oddCount = 0;
    int currCount = 1, maxCount = 1;

    for (int i = 0; i < len; i++) {

        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        avg = avg + arr[i];

        if (arr[i] < min) {
            min = arr[i];
        } else if (arr[i] > max) {
            max = arr[i];
        }

        
        if (arr[i] == arr[i - 1]) {
            currCount++;
        } else {
            currCount = 1;
        }

        if (currCount > maxCount) {
            maxCount = currCount;
            mode = arr[i];
        } 

    }
    avg = avg / len;
    printf("Average of array numbers: %d\n", avg);
    printf("Minimum of the array: %d\n", min);
    printf("Maximum of the array: %d\n", max);
    printf("Mode of the array: %d\n", mode);
    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);
    return 0;
}