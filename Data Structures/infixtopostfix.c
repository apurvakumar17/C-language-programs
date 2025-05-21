/*#include <string.h>
#include <stdio.h>
#include <ctype.h>
#define MAX 40

int precedence(char c) {
    if (c == '(') {
        return 0;
    } else if(c == '+' || c == '-') {
        return 1;
    } else if(c == '*' || c == '/') {
        return 2;
    } else {
        return 3;
    }
}
int main() {
    char I[MAX];
    printf("Enter the INFIX EXP: ");
    scanf("%s", &I);
    int itop = strlen(I) - 1;

    char P[MAX];
    int ptop = -1;

    char STACK[MAX];
    int top = -1;

    STACK[++top] = '(';
    I[++itop] = ')';
    I[itop + 1] = '\0';
    printf("Infix: ");
    for (int i = 0; i < strlen(I); i++) {
        printf("%c", I[i]);
        if (I[i] == '(') {
            STACK[++top] = I[i];
        } else if (isalpha(I[i])) {
            P[++ptop] = I[i];
        } else if (I[i]== ')') {
            while (STACK[top] != '(') {
                P[++ptop] = STACK[top--];
            }
            top--;
        } else {
            while (precedence(STACK[top]) >= precedence(I[i])) {
                P[++ptop] = STACK[top--];
            }
            STACK[++top] = I[i];
        }
    }
    printf("\nPostfix: ");
    P[++ptop] = '\0';  // null-terminate postfix
    for (int i = 0; i < strlen(P); i++) {
        printf("%c", P[i]);
    }
    return 0;
}*/













#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 40

int precedence(char c) {
    if (c == '(') {
        return 0;
    } else if (c == '+' || c == '-') {
        return 1;
    } else if (c == '*' || c == '/') {
        return 2;
    } else {
        return 3;
    }
}

int main() {

    char I[MAX];
    printf("Enter Infix exp: ");
    scanf("%s", &I);
    int itop = strlen(I) - 1;

    char P[MAX];
    int ptop = -1;

    char STACK[MAX];
    int top = -1;

    STACK[++top] = '(';
    I[++itop] = ')';
    I[itop + 1] = '\0';

    printf("Infix Exp: ");
    for (int i = 0; i < strlen(I); i++) {
        printf("%c", I[i]);
        if (I[i] == '(') {
            STACK[++top] = I[i];
        } else if (isalpha(I[i])) {
            P[++ptop] = I[i];
        } else if (I[i] == ')') {
            while (STACK[top] != '(') {
                P[++ptop] = STACK[top--];
            }
            top--;
        } else {
            while (precedence(STACK[top]) >= precedence(I[i])) {
                P[++ptop] = STACK[top--];
            }
            STACK[++top] = I[i];
        }
    }

    printf("\nPostfix Exp: "); //A+B*(D-C)+E^F+G
    P[++ptop] = '\0';  // null-terminate postfix
    for (int i = 0; i < strlen(P); i++) {
        printf("%c", P[i]);
    }
    return 0;
}