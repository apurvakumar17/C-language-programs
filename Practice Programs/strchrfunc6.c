#include <stdio.h>
#include <string.h>

void printresult(char *org, char *res) {
    if (res != NULL) {
        printf("Character found at: %d\n", (res - org) + 1);
    } else {
        printf("Character not found\n");
    }
}

char* xstrchr(const char *str1, int chr) {
    while (*str1 != '\0') {
        if (*str1 == (char) chr) {
            return (char *)str1;
        }
        str1++;
    }
    if (chr == '\0') {
        return (char *)str1;
    }
    return NULL;
}

char* xstrrchr(const char *str1, int chr) {
    const char *last_occurrence = NULL;

    while (*str1 != '\0') {
        if (*str1 == (char) chr) {
            last_occurrence = str1; // Update to the current occurrence
        }
        str1++;
    }

    if (chr == '\0') { // Handle null terminator case
        return (char *)str1;
    }

    return (char *)last_occurrence; // Return last occurrence or NULL
}

int main() {
    int character = 'A';      
    char name[] = "Apurva";
    char string[] = "Hello World";

    // Test standard strchr
    char *result = strchr(name, character); 
    printresult(name, result);

    // Test custom xstrchr
    char *result2 = xstrchr(name, 'v');
    printresult(name, result2);

    // Test custom xstrchr with 'A'
    char *result3 = xstrchr(name, character);
    printresult(name, result3);

    // Test standard strrchr
    char *result4 = strrchr(name, 'v');
    printresult(name, result4);

    // Test custom xstrrchr
    char *result5 = xstrrchr(string, 'o');
    printresult(string, result5);

    // Test standard strchr
    char *result6 = strchr(name, 'Q');
    printresult(string, result6);

    // Test custom strchr
    char *result7 = xstrchr(name, 'Q');
    printresult(string, result7);
    return 0;
}
