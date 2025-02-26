#include <stdio.h>
#include <stdlib.h>

void display(int *arr, int size) {
    printf("\n");
    for (int i = 0; i < size; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

void delete(int *arr, int *size, int loc) {
    if (loc < 0 || loc >= *size) {
        printf("Invalid location!\n");
        return;
    }
    printf("Deleted Element: %d\n", arr[loc]);
    for (int i = loc; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

int main() {
    int size = 5;
    int arr[size];
    printf("Enter 5 integers: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int loc;
    printf("Enter the location to delete: ");
    scanf("%d", &loc);

    delete(arr, &size, loc);
    display(arr, size);
    
    printf("\nApurva Kumar 04814902024");
    return 0;
}