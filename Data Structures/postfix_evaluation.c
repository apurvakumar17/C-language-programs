#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define MAX 40
int main() {
    char P[MAX];
    int STACK[MAX];
    int top = -1;
    printf("Enter the postfix expression: ");
    scanf("%s", &P);
    for (int i = 0; i < strlen(P); i++) {
        if (isdigit(P[i])) {
            STACK[++top] = P[i] - '0';
        } else {
            int val2 = STACK[top--];
            int val1 = STACK[top--];
            int result;
            switch ((char)P[i]) {
                case '+':
                    result = val1 + val2;
                    break;
                case '-':
                    result = val1 - val2;
                    break;
                case '*':
                    result = val1 * val2;
                    break;
                case '/':
                    result = val1 / val2;
                    break;
                case '^':
                    result = pow(val1, val2);
                    break;
                default:
                    printf("Invalid Operrator!");
                    return 0;
            }
            STACK[++top] = result;
        }
    }
    printf("Postfix Exp: ");
    for (int i = 0; i < strlen(P); i++) {
        printf("%c,", P[i]);
    }
    printf("\nAnswer: %d", STACK[top]);
    return 0;
}