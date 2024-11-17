#include <stdio.h>
#include <string.h>

void vowcon(char *str) {
    int vowels = 0, consonants = 0;

    for (int i = 0; i < strlen(str); i++) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) { 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n\n", consonants);
}

int main() {
    char str[50];
    printf("\nPractical 25, 04814902024, Apurva Kumar\n");
    printf("Enter the string: ");
    scanf("%s", str); 
    vowcon(str);
    return 0;
}