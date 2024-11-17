#include <stdio.h>
#include <string.h>


char* xstrchr(const char *str1, int chr) {
    while (*str1 != '\0') {
        if (*str1 == (char) chr) {
            return (char *)str1;
        }
        str1++;
    }
    if (*str1 == chr) {
        return (char *)str1;
    } else {
        return NULL;
    }
}

char* xstrrchr(const char *str1, int chr) {
    char cu = *str1;
    while (*str1 != '\0') {
        str1++;
    }
    str1--;
    while (*str1 != cu) {
        if (*str1 == (char) chr) {
            return (char *)str1;
        }
        str1--;
    }
    if (*str1 == chr) {
        return (char *)str1;
    } else {
        return NULL;
    }
}
int main() {
    int character = 'A';      
    char name[] = "Apurva";

    char *result = strchr(name, character); 
    if (result != NULL) {
        printf("Character found at: %d\n",(result - name) + 1);
    } else {
        printf("Character not found\n");
    }

    char *result2 = xstrchr(name, 'v');
    if (result2 != NULL) {
        printf("Character found at: %d\n",(result2 - name) + 1);
    } else {
        printf("Character not found\n");
    }

    char *result3 = xstrchr(name, character);
    if (result3 != NULL) {
        printf("Character found at: %d\n",(result3 - name) + 1);
    } else {
        printf("Character not found\n");
    }


    return 0;
}
