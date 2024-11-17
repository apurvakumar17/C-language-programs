#include <stdio.h>

int main() {
    char name[20];
    char name2[20];
    char name3[20];

    printf("Enter your name (Using GETS): ");
    gets(name);
    puts(name);

    printf("Enter your name (Using SCANF): ");
    scanf("%s", name2);
    while (getchar() != '\n'); // Clear buffer
    printf("%s\n", name2);

    printf("Enter your name (Using modified SCANF): ");
    scanf("%[^\n]s", name3);
    printf("%s\n", name3);

    printf("SEE DIFFERENCES YOURSELF");
    return 0;
}
