#include <stdio.h>

int main() {
    int array[7] = {2, 5, 10, 17, 6, 31, 40};

    int f;
    int found = 0;

    printf("Enter the number to search: ");
    scanf("%d", &f);

    for (int a = 0; a < 7; a++) {
        if (f == array[a]) {
            printf("Number found at index: %d\n", a);
            found = 1;
        }
    }

    if (!found) {
        printf("No element found\n");
    }

    return 0;
}
