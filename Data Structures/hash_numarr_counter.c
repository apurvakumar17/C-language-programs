#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    int* arr = (int*) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d,", arr[i]);
    }

    int hash[13] = {0};

    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    printf("\nHash Array: ");
    for (int i = 0; i < 12; i++) {
        printf("%d,", hash[i]);
    }

    int q;
    printf("\nEnter the number of elements you want to check: ");
    scanf("%d", &q);

    while(q--) {
        int num;
        printf("\nEnter number to check: ");
        scanf("%d", &num);
        printf("%d, ", hash[num]);
    }
    return 0;
}