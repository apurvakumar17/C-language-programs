#include <stdio.h>

int main() {
    int rows;
    do {
        printf("Enter an odd number of rows for the diamond pattern: ");
        scanf("%d", &rows);
        
        if (rows % 2 == 0) {
            printf("You entered an even number. Please enter an odd number.\n");
        }
    } while (rows % 2 == 0);

    int n = rows / 2;
    
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print the bottom half of the diamond
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
