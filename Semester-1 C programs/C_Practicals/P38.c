#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//"datafile.txt" should be created

int main() {
    FILE *file;
    char ch;
    int words = 0, characters = 0;
    int inWord = 0;
    printf("\nPractical 38, 04814902024, Apurva Kumar\n");
    file = fopen("datafile.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(0);
    }
    while ((ch = fgetc(file)) != EOF) {
        characters++; 
        if (isspace(ch)) {
            if (inWord) {
                inWord = 0;
            }
        } else {
            if (!inWord) {
                inWord = 1;
                words++;
            }
        }
    }
    fclose(file);
    printf("Number of characters: %d\n", characters);
    printf("Number of words: %d\n\n", words);
    return 0;
}