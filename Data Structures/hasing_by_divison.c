#include <stdio.h>
int main() {
    static long int arr[151], sdata, ind;
    for (int i = 0; i < 2; i++) {
        printf("Enter Aadhar No.: ");
        scanf("%ld", &sdata);
        ind = sdata % 151;
        if (arr[ind] == 0) {
            arr[ind] = sdata;
        } else {
            while (arr[ind] != 0) {
                ind++;
            }
            arr[ind] = sdata;
        }
    }

    for (int k = 0; k < 3; k++) {
        printf("\nEnter the no. to search: ");
        scanf("%ld", &sdata);
        ind = sdata % 151;
        int flg = 1;
        if(arr[ind] == sdata) {
            printf("Entered No. found at %d", ind);
        }else {
            while (arr[ind] != sdata) {
                ind++;
                if (ind == 151) {
                    flg = 0;
                    break;
                }
            }
            if (flg) {
                printf("Entered No. found at %d", ind);
            } else {
                printf("Entered No. not found");
            }
            
        }
    }
    return 0;
}