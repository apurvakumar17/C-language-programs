#include <stdio.h>
#include <string.h>

int main() {
    union Data {
        int i;
        float f;
        char str[20];
    };
    union Data data;

    data.i = 42;
    printf("\nPractical 30, 04814902024, Apurva Kumar\n");
    printf("Union Data as Integer: %d\n", data.i);
    data.f = 3.14;
    printf("Union Data as Float: %f\n", data.f);
    strcpy(data.str, "Hello, World!");
    printf("Union Data as String: %s\n", data.str);
    
    printf("Size of union Data: %d bytes\n\n", sizeof(data));
    return 0;
}