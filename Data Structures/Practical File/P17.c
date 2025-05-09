#include <stdio.h>
int main() {
    int arr[] = {13, 11, 43, 26, 35, 9};
    int found = 0;
    int num;
    printf("Enter the number to search: ");
    scanf("%d", &num);
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        if (arr[i] == num) {
            found = 1;
            printf("Entered number found at index %d", i);
        }
    }
    if (!found) {
        printf("Entered number not found");
    }
    printf("\nApurva Kumar 04814902024\n");
    return 0;
}