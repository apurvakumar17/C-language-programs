#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int marks[50];
    int num[6] = { 2, 4, 12, 5, 45, 5 } ; 
    int n[] = { 2, 4, 12, 5, 45, 5 } ; 
    srand(time(0));
    for (int i = 0; i < 50; i++) {
        marks[i] = rand();
    }
    for (int i = 0; i < 50; i++) {
        printf("%d ", marks[i]);
    }
    printf("\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", &num[i]);
    }
    return 0;
}
