#include <stdio.h>
#include <string.h>

int isPalindrome(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0;
        }
    }
    return 1; 
}

int main() {
    char str[100];
    printf("\nPractical 22, 04814902024, Apurva Kumar\n");
    printf("Enter a word: ");
    scanf("%s", str);
    if (isPalindrome(str)) {
        printf("%s is a palindrome.\n\n", str);
    } else {
        printf("%s is not a palindrome.\n\n", str);
    }
    
    return 0;
}