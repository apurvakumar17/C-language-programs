#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    if (argc != 3) { // Ensure exactly 2 arguments are passed
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }

    // Convert arguments to integers using atoi
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // Print the result
    printf("Sum of %d and %d is equal to %d\n", num1, num2, num1 + num2);
    return 0;
}
