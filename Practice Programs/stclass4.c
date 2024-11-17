#include <stdio.h>

// Define global variables
int i = 0;
int j = 0;

void dispij() {
    extern int i; // Declare i and j as extern within this function
    extern int j;
    printf("I = %d\nJ = %d", i, j);
}

int main() {
    extern int j; // Declare j as extern here too
    dispij();
    return 0;
}
