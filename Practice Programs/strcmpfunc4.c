#include <stdio.h>
#include <string.h>
#include <ctype.h>

int xstrcmp(const char *str1, const char *str2) {
    while (*str1 != '\0' || *str2 != '\0') {
        if (*str1 != *str2) {
            return (*str1 - *str2);
        }
        str1++;
        str2++;
    }
    return 0; // Strings are equal
}

int xstricmp(const char *str1, const char *str2) {
    char ex1, ex2;
    while (*str1 != '\0' || *str2 != '\0') {
        ex1 = tolower((unsigned char)*str1);
        ex2 = tolower((unsigned char)*str2);

        if (ex1 != ex2) {
            return (ex1 - ex2);
        }
        str1++;
        str2++;
    }
    return 0; // Strings are equal
}

int xstrncmp(const char *str1, const char *str2, int ln) {
    while (ln > 0) {
        if (*str1 != *str2) {
            return (*str1 - *str2); // Difference between characters
        }
        if (*str1 == '\0' || *str2 == '\0') {
            break; // Stop if either string ends
        }
        str1++;
        str2++;
        ln--;
    }
    return 0; // Strings are equal for the first 'ln' characters
}

int xstrnicmp(const char *str1, const char *str2, int ln) {
    char ex1, ex2;
    while (ln > 0) {
        ex1 = tolower((unsigned char)*str1);
        ex2 = tolower((unsigned char)*str2);

        if (*str1 != *str2) {
            return (*str1 - *str2); // Difference between characters
        }
        if (*str1 == '\0' || *str2 == '\0') {
            break; // Stop if either string ends
        }
        str1++;
        str2++;
        ln--;
    }
}

int main() {
    char string1[] = "Jerry";
    char string2[] = "Ferry";
    char string3[] = "Hello Jerry";
    char string4[] = "Hello Tom";

    int i, j, k, l, m, n;
    i = strcmp(string1, "Jerry");
    j = strcmp(string1, string2);
    k = strcmp(string1, "Jerry boy");
    l = stricmp(string1, "jerry");
    m = strncmp(string3, string4, 5);
    n = strncmp(string3, string4, 7);
    printf("Pre-defined: %d %d %d %d %d %d", i, j, k, l, m, n);

    i = xstrcmp(string1, "Jerry");
    j = xstrcmp(string1, string2);
    k = xstrcmp(string1, "Jerry boy");
    l = xstricmp(string1, "jerry");
    m = strncmp(string3, string4, 5);
    n = strncmp(string3, string4, 7);
    printf("\nUser-defined: %d %d %d %d %d %d(better)", i, j, k, l, m, n);

    return 0;
}