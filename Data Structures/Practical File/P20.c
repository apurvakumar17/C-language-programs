#include <stdio.h>
int main() {
    int arr[6], i = 0, num, index;
    for (; i < 5; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Array: ");
    for (int k = 0; k < 5; k++) {
        printf("%d, ", arr[k]);
    }
    printf("\nEnter New Element: ");
    scanf("%d", &num);
    printf("Enter Index (1 - 5): ");
    scanf("%d", &index); index--;
    for (int j = 5; j >= index; j--) {
        arr[j] = arr[j - 1];
    }
    arr[index] = num;
    printf("New Array: ");
    for (int k = 0; k < 6; k++) {
        printf("%d, ", arr[k]);
    }
    printf("\nApurva Kumar 04814902024\n");
    return 0;
}