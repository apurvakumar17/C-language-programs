#include <stdio.h>

int main() {
    int lvl;
    char a2 = 'a';
    printf("Enter the max level (1-26): ");
    scanf("%d", &lvl);
    
    for (int a = 1; a <= lvl; a++) {
        for (char a1 = 'a'; a1 <= a2; a1++) {
            printf("%c ", a1);
        }
        printf("\n");
        a2++;
    }
    
    return 0;
}
