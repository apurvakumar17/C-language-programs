/*difference between strcpy(target, source) and strdup(target, source) is that while 
using strcpy destination string should have preallocated sufficient memory
while strdup can dynamically allocate sufficient memory to the pointer*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // For malloc and free

int main() {
    char src[] = "Apurva";

    // Using strdup to duplicate the string
    char *srcdup = strdup(src);

    if (srcdup == NULL) {
        perror("Memory allocation failed");
        return 1;
    }

    // Display original and duplicated strings
    printf("Original string: %s\n", src);
    printf("Duplicated string: %s\n", srcdup);

    // Free the dynamically allocated memory
    free(srcdup);

    return 0;
}
