#include <stdio.h>

int main() {
    unsigned long long int arr[151] = {0}, sdata, temp;
    int ind;
    
    for (int i = 0; i < 2; i++) {
        printf("Enter Aadhar No.: ");
        scanf("%llu", &sdata);
        temp = sdata;
        ind = 0;

        while (temp != 0) {
            ind += temp % 10000;
            temp = temp / 10000;
        }
        ind = ind % 151;
        
        while (arr[ind] != 0) {
            ind = (ind + 1) % 151; // Linear probing
        }
        arr[ind] = sdata;
        printf("Stored %llu at index %d\n", sdata, ind);
    }

    for (int k = 0; k < 3; k++) {
        printf("\nEnter the no. to search: ");
        scanf("%llu", &sdata);
        temp = sdata;
        ind = 0;

        while (temp != 0) {
            ind += temp % 10000;
            temp = temp / 10000;
        }
        ind = ind % 151;
        int start = ind;
        int found = 0;

        while (arr[ind] != 0) {
            if (arr[ind] == sdata) {
                printf("Entered No. found at index %d\n", ind);
                found = 1;
                break;
            }
            ind = (ind + 1) % 151; // Linear probing
            if (ind == start) break;
        }

        if (!found) {
            printf("Entered No. not found\n");
        }
    }
    
    printf("\nApurva Kumar 04814902024\n");
    return 0;
}
