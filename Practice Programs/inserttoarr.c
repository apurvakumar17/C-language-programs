#include <stdio.h>

void insert(int* arr, int len) {
    int position, value;

    // Ask for position to insert, adjusting for 0-based index
    printf("\nEnter the index (0 to %d) at which you want to insert new element: ", len);
    scanf("%d", &position);

    for (int i = len - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    printf("\nEnter the value which you want to insert: ");
    scanf("%d", &value);

    arr[position] = value;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5}; // Example array with 5 elements
    int len = 5;
    insert(arr, len);
    len++;
    printf("Updated array: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
