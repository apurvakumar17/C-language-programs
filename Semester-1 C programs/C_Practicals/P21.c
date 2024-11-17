#include <stdio.h>
#include <stdlib.h>

int main(){
    int arsize, max, i;
    int *ptr;
    printf("\nPractical 21, 04814902024, Apurva Kumar\n");
    printf("Enter size of array: ");
    scanf("%d", &arsize);
    ptr = (int*) malloc (sizeof(int)*arsize);

    if (ptr == NULL){
        printf("Error: ");
    } else {
        printf("Enter array elements: \n");
        for (i = 0; i < arsize; i++) {
            scanf ("%d", &ptr[i]);
        }
    }
    max = ptr[0];
    for (i = 0; i < arsize; i++) {
        if (ptr[i] > max) {
            max = ptr[i];
        }
    }
    printf("Largest Element in array is: %d\n\n",max);
    free(ptr);
    return 0;
}