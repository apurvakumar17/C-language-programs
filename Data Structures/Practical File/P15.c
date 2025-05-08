#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    const char* P[] = {"12", "7", "3", "-", "/", "2", "1", "5", "+", "*", "+"}; // postfix expression
    int Plength = sizeof(P) / sizeof(P[0]);
    int stack[30];
    int top = -1;

    for (int i = 0; i < Plength; i++) {
        if (isdigit(P[i][0])) {
            // Operand: convert and push
            top++;
            stack[top] = atoi(P[i]);
        } else {
            // Operator: pop two operands
            int b = stack[top--];
            int a = stack[top--];
            int result;

            if (strcmp(P[i], "+") == 0) {
                result = a + b;
            } else if (strcmp(P[i], "-") == 0) {
                result = a - b;
            } else if (strcmp(P[i], "*") == 0) {
                result = a * b;
            } else if (strcmp(P[i], "/") == 0) {
                result = a / b; // you might want to handle division by zero here
            } else {
                printf("Unknown operator: %s\n", P[i]);
                return 1;
            }

            // Push the result back onto the stack
            top++;
            stack[top] = result;
        }
    }
    printf("Postfix Exp: ");
    for (int j = 0; j < Plength; j++) {
        printf("%s,", P[j]);
    }
    // Final result is on top of the stack
    printf("\nResult = %d\n", stack[top]);
    printf("Apurva Kumar 04814902024\n");

    return 0;
}