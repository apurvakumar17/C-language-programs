#include <stdio.h>
#include <string.h>

char* xstrrev(char *str) {
    static char reversed[100]; // Static to ensure it persists after the function returns
    int len = strlen(str); // Calculate the length of the string

    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - i - 1]; // Copy characters in reverse order
    }
    reversed[len] = '\0'; // Null-terminate the reversed string

    return reversed;
}

int main() {
    char name[] = "Apurva";
    char *revname = strrev(name);
    printf("Reversed = %s", name);
    printf("\nReversed = %s", revname);

    char *revname2 = xstrrev(name);
    printf("\nReversed = %s", revname2);
    printf("\nReversed = %s", name);

    return 0;
}