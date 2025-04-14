#include <stdio.h>
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(arr) / sizeof(int);
    int low = 0;
    int high = len - 1;
    int mid;
    int element;
    printf("Enter element to search: ");
    scanf("%d", &element);
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == element) {
            printf("%d found at %d", element, mid);
            return 0;
        } else if (arr[mid] > element) {
            high = mid - 1;
        } else if (arr[mid] < element) {
            low = mid + 1;
        }
    } 
    printf("%d not found", element);
    return 0;
}