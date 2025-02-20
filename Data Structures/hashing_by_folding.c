#include <stdio.h>
int main() {
    long int arr[151] = {0}, sdata, ind;
    
    for (int i = 0; i < 2; i++) {
        printf("Enter Aadhar No.: ");
        scanf("%ld", &sdata);
        long int temp = sdata;
        ind = 0;
        while (temp != 0) {
            ind += temp % 10000;
            temp = temp / 10000;
        }
        ind = ind % 151;
        
        while (arr[ind] != 0) {
            ind = (ind + 1) % 151; //wrap kardiya
        }
        arr[ind] = sdata;
        printf("Stored %ld at index %ld\n", sdata, ind); // Debug print
    }

    for (int k = 0; k < 3; k++) {
        printf("\nEnter the no. to search: ");
        scanf("%ld", &sdata);
        long int temp = sdata;
        ind = 0;
        while (temp != 0) {
            ind += temp % 10000;
            temp = temp / 10000;
        }
        ind = ind % 151;
        int start = ind;
        int flg = 1;

        if(arr[ind] == sdata) {
            printf("Entered No. found at %d", ind);
        }else {
            while (arr[ind] != sdata) {
                ind = (ind + 1) % 151; //wrap kardiya
                if (ind == start) {
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