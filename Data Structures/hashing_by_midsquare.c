#include <stdio.h>
int main() {
    long int arr[101] = {0}, sdata, ind;
    
    for (int i = 0; i < 2; i++) {
        printf("Enter Aadhar No.: ");
        scanf("%ld", &sdata);
        long int temp = sdata * sdata;


        
        while (arr[ind] != 0) {
            ind = (ind + 1) % 151; //wrap kardiya
        }
        arr[ind] = sdata;
        printf("Stored %ld at index %ld\n", sdata, ind); // Debug print
    }
    return 0;
}