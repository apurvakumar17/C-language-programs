#include <stdio.h>

int main() {
    char name[] = "Apurva", *j = name;
    int i = 0;
    while (name[i] != '\0') {
        printf("%c", name[i]);
        i++;
    }
    printf("\n");
    while (*j != '\0') {
        printf("%c", *j);
        j++;
    }
    printf("\n");
    printf("%c%c%c%c", name[0], *( name + 1 ), *( 2 + name ), 3[name]);
    printf("\n");
    printf("%s", name);
    return 0;
}
