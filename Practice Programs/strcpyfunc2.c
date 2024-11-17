#include <stdio.h>
#include <string.h>

void xstrcpy(char *target, char *source) {
    while (*source != '\0') {
        *target = *source;
        source++;
        target++;
    }
    *target = '\0';
}

int main() {
    char source[] = "SAYONARA";
    char target[20];
    char xtarget[20];

    // Using built-in strcpy
    strcpy(target, source);
    printf("Source = %s\n", source);
    printf("Copied = %s\n", target);

    // Using custom xstrcpy
    xstrcpy(xtarget, source);
    printf("My Copied = %s\n", xtarget);

    // Using a modifiable string
    char p[] = "Hello";
    printf("%s\n", p);
    *p = 'M';  // Modify the first character
    printf("%s\n", p);

    return 0;
}
