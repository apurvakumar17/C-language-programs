#include <stdio.h>
int main() {
    int arr[] = {13, 11, 43, 26, 35, 9};
    int num;
    printf("Enter the element to search: ");
    scanf("%d", &num);
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        if (arr[i] == num) {
            printf("%d found at index %d", num, i);
            return 0;
        }
    }
    printf("%d not found in the array.", num);
    return 0;
}