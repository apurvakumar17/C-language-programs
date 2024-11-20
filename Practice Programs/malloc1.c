#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr;
    int n;
    printf("Enter lenght of array required: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory Allocation Failed !!");
        return 1;
    }
    
    for (int i = n; i > 0; i--) {
        ptr[i-1] = i;
    }

    for (int j = 0; j < n; j++) {
        printf("Element = %d\n", ptr[j]);
    }

    free(ptr);
    return 0;
}