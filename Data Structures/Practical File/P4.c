#include <stdio.h>

int main() {
    int i, j, k, data;
    int tarr[13][3];
    tarr[0][0] = 3;
    tarr[0][1] = 4;
    tarr[0][2] = 0;
    k = 0;
    
    for (int a = 0; a < 3; a++) {
        printf("Enter data of row %d: ", a + 1);
        for (int b = 0; b < 4; b++) {
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
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 4; y++) {
            if (tarr[m][0] == x && tarr[m][1] == y) {
                printf("%d ", tarr[m][2]);
                m++;
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
    
    printf("\nApurva Kumar 04814902024");
    return 0;
}