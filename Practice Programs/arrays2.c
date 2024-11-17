#include <stdio.h>

int main() {
    int arr[50], len, *i, *j, k;
    printf("Length of array?: ");
    scanf("%d", &len);
    i = arr;
    j = arr;
    for (k = 0; k < len; k++) {
        printf("\nEnter element %d: ", k);
        scanf("%d", i);
        i++;
    }
    for (k = 0; k < len; k++) {
        printf("\nElement %d: %d", k, *j);
        j++;
    }
    return 0;
}