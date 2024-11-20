#include <stdio.h>
#include <stdlib.h>

int main() {
    char* ptr;
    int n;
    printf("Enter length of string: ");
    scanf("%d",&n);
    ptr = (char*) malloc((n+1) * sizeof(char));
    if (ptr == NULL) {
        printf("Memory Allocation failed!!");
        return 1;
    }
    printf("Enter String of length %d characters: ", n);
    getchar();
    fgets(ptr, n+1,stdin);
    printf("You entered: %s ", ptr);
    free(ptr);
}