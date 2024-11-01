#include <stdio.h>
#include <string.h>

void printReverse(char *str) {
    char *end = str + strlen(str) - 1;
    while (end >= str) {
        printf("%c", *end);
        end--;
    }
    printf("\n");
}
int main() {
    char str[100];
    printf("\nPractical 24, 04814902024, Apurva Kumar\n");
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Reversed string: ");
    printReverse(str);
    printf("\n");
    return 0;
}