#include <stdio.h>

int stringLength(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
void reverseString(char *str) {
    int length = stringLength(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}
void concatenateStrings(char *str1, char *str2, char *result) {
    int i = 0, j = 0;
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }
    result[i] = '\0'; 
}
void copyString(char *source, char *destination) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}
int main() {
    int choice;
    char str1[100], str2[100], result[200];
    printf("\nPractical 23, 04814902024, Apurva Kumar\n");
    do {
        printf("\nMenu:\n");
        printf("1. Reverse a string\n");
        printf("2. Concatenate two strings\n");
        printf("3. Find length of a string\n");
        printf("4. Copy one string to another\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter a string to reverse: ");
                scanf("%s", str1);
                reverseString(str1);
                printf("Reversed string: %s\n", str1);
                break;
            case 2:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                concatenateStrings(str1, str2, result);
                printf("Concatenated string: %s\n", result);
                break;
            case 3:
                printf("Enter a string to find its length: ");
                scanf("%s", str1);
                printf("Length of the string: %d\n", stringLength(str1));
                break;
            case 4:
                printf("Enter the source string: ");
                scanf("%s", str1);
                copyString(str1, str2);
                printf("Copied string: %s\n", str2);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);
    return 0;
}