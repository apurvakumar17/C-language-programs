#include <stdio.h>

int main() {
    char name[4][10] = {
        "Apurva",
        "Ananya",
        "Tushar",
        "Rekha"
    };
    printf("First name = %s\n", name);
    printf("Second name = %s\n", (name+1));
    printf("Third name's second character = %c\n", *(*(name+2) + 1));

    return 0;
}