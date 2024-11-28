#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fptr = fopen("mydoc2.txt", "w");
    if (fptr == NULL) {
        puts("Sorry failed to open file!!");
        return 1;
    }
    char str[80];
    printf("Write some lines below: \n");
    while (strlen(gets(str)) > 0) {
        fputs(str, fptr);
        fputs("\n", fptr);
    }
    fclose(fptr);

    FILE *fptr2 = fopen("mydoc2.txt", "r");
    if (fptr2 == NULL) {
        puts("Sorry failed to open file!!");
        return 1;
    }
    printf("\nContents of the file are as follows: \n");
    while (fgets(str, 79, fptr2) != NULL) {
        printf("%s", str);
    } 
    fclose(fptr2);
    return 0;
}