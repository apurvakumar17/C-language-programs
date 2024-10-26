#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int n1, n2;
    printf("\nPractical 16, 04814902024, Apurva Kumar\n");
    printf("Enter numbers: ");
    scanf("%d %d", &n1, &n2);
    swap(&n1, &n2);
    printf("Numbers after swap: %d %d\n\n", n1, n2);
    return 0;
}