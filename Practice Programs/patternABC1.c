#include <stdio.h>

int main() {
    int a = 65;  // ASCII value of 'A'
    int j = 0;   // Variable to keep track of the current row length

    // Loop for 7 rows
    for (int i = 0; i < 7; i++) {
        if (i <= 3) {  // For the first half, print increasing sequence of characters
            for (j = 0; j <= i; j++) {
                printf("%c", a + j);  // Print characters starting from 'A'
            }
            printf("\n");
        } else {  // For the second half, print decreasing sequence of characters
            for (int k = 0; k <= 6 - i; k++) {
                printf("%c", a + k);  // Print characters starting from 'A'
            }
            printf("\n");
        }
    }

    return 0;
}
