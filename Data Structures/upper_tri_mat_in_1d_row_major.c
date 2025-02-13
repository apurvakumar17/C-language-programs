#include <stdio.h>
int main() {
    int n = 0, data = 0, ind;
    printf("Enter rows/columns of upper triangular matrix: ");
    scanf("%d", &n);
    //calculating number of data carrying columns for upper triangular matrix.
    int og = (n * (n + 1)) / 2;
    int arr[og];
    for (int i = 0; i < n; i++) {
        printf("Enter elements for row %d: ", i + 1);
        for (int j = 0; j < n; j++) {
            scanf("%d", &data);
            if (i <= j) {
                ind = (n * i) - ((i * i - 1) / 2) + (j - i);
                arr[ind] = data;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j) {
                ind = (n * i) - ((i * i - 1) / 2) + (j - i);
                printf("%d ", arr[ind]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
    printf("Programmed by Apurva Kumar");
    return 0;
}