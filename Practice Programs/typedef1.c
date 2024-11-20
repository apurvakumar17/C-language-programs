#include <stdio.h>

int main() {
    typedef unsigned int POSINT;
    POSINT marks = 100;
    printf("Congrats you got %d!!\n", marks);
    POSINT marks2 = 30;
    printf("Sorry you failed by %d marks", 33 - marks2);
    return 0;
}