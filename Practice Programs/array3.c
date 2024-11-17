#include <stdio.h>

int leni(int*);
int lens(char*);

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    char arr2[] = {'A', 'B', 'C', 'D', 'E'};
    char arr3[] = {'H', 'a', 'p', 'p', 'y', '!', '!', '!'}; 
    char arr4[] = {'A', 'P', 'U', 'R', 'V', 'A','\0'};
    char arr5[] = "Cat";
    char arr6[] = "Hello";
    
    printf("Length of arr1: %d\n", leni(arr1));
    printf("Length of arr2: %d\n", lens(arr2));
    printf("Length of arr3: %d\n", lens(arr3));
    printf("Length of arr4: %d\n", lens(arr4));
    printf("Length of arr5: %d\n", lens(arr5));
    printf("Length of arr6: %d\n", lens(arr6));
    return 0;
}

int leni(int *parr) {
    int length = 0;
    while (*parr != '\0') {
        length++;
        parr++;
    }
    return length;
}
int lens(char *parr) {
    int length = 0;
    while (*parr != '\0') {
        length++;
        parr++;
    }
    return length;
}