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

    int r;
    int c;
    int flg = 0;

    for (int a = 0; a < i; a++) {
        for (int b = 0; b < j; b++) {
            int c;
            for (c = 1; c <= k; c++) {
                if (tarr[c][0] == a && tarr[c][1] == b) {
                    flg = 1;
                    break;
                }
            }
            if (flg == 0) {
                printf("0 ");
            } else {
                printf("%d ", tarr[c][2]);
                flg = 0;
            }

        }
        printf("\n");
    }
    printf("Programmed by Apurva Kumar");
    return 0;
}