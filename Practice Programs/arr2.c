#include <stdio.h>
int main() {
    char name[] = {'a', 'b', 'c', 'd'};
    char* ptr = name;
    for (int i = 0; i < 4; i++) {
        printf("%c\n", *(ptr++));
    }
}