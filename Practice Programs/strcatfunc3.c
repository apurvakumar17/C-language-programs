#include <stdio.h>
#include <string.h>
char* xstrcat(char *str1, char *str2) {
    int step = 0;
    while (*str1 != '\0') {
        str1++;
        step++;
    }
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
        step++;
    }
    *str1 = '\0';
    return str1-step;

}
int main() {
    char name[30] = "Apurva ";
    char surname[] = "Kumar";
    printf("Concatenated = %s",strcat(name, surname));   
    printf("\nConcatenated = %s",name);
    printf("\nConcatenated = %s",xstrcat(name, surname));   
    printf("\nConcatenated = %s",name);

    return 0;
}