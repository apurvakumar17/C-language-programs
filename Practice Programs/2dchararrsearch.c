#include <stdio.h>
#include <string.h>

int main() {
    char name[4][10] = {
        "Apurva",
        "Ananya",
        "Tushar",
        "Rekha"
    };
    char sr[20];
    int found = 0;

    while (found != 1) {
        printf("\nEnter the name to search: ");
        fgets(sr, sizeof(sr), stdin);
        sr[strcspn(sr, "\n")] = '\0'; // Remove newline character from input

        found = 0;
        for (int i = 0; i < 4; i++) { // Loop through all rows in the array
            if (strcmp(name[i], sr) == 0) { // Use strcmp for string comparison
                printf("Welcome %s", sr);
                found = 1;
                break;
            }
        }

        if (found != 1) {
            printf("Not Found! Try Again!!");
        }
    }

    return 0;
}
