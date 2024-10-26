#include <stdio.h>

int main() {
    char ch;
    printf("\nPractical 14, 04814902024, Apurva Kumar\n");
    printf("Enter a character: ");
    scanf("%c", &ch);
    switch (ch) {
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            printf("%c is a vowel.\n\n", ch);
            break;
        default:
            printf("%c is not a vowel.\n\n", ch);
    }
    return 0;
}