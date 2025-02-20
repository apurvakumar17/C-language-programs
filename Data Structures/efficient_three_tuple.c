#include <stdio.h>

int main() {
    int i, j, k, data;
    printf("Enter number of rows: ");
    scanf("%d", &i);
    printf("Enter number of columns: ");
    scanf("%d", &j);
    int tarr[i * j][3];
    tarr[0][0] = i;
    tarr[0][1] = j;
    tarr[0][2] = 0;
    k = 0;
    
    for (int a = 0; a < i; a++) {
        printf("Enter data of row %d: ", a + 1);
        for (int b = 0; b < j; b++) {
            scanf("%d", &data);
            if (data != 0) {
                k++;
                tarr[0][2]++;
                tarr[k][0] = a;
                tarr[k][1] = b;
                tarr[k][2] = data;
            }
        }
    }

    int m = 1;
    for (int x = 0; x < i; x++) {
        for (int y = 0; y < j; y++) {
            if (tarr[m][0] == x && tarr[m][1] == y) {
                printf("%d ", tarr[m][2]);
                m++;
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}