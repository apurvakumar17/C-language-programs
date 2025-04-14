#include <stdio.h>
#include <string.h>

void push(char ch, char* st) {
    st[strlen(st)] = ch;
}

char pop(char* st) {
    char data = st[strlen(st) - 1];
    st[strlen(st) - 1] = 0;
    return data;
}

int isoperator(char ch) {
    char ops[] = "/*-+^()";
    for (int i = 0; i < strlen(ops); i++) {
        if (ops[i] == ch) {
            return 1;
        }
    }
    return 0;
}

int precedence(char ch) {
    if(ch == '^') {
        return 4;
    } else if(ch == '*' || ch == '/') {
        return 3;
    } else if(ch == '+' || ch == '-') {
        return 2;
    } else if(ch == '(') {
        return 1;
    } else {
        return 0;
    }
    return 0;
}

char peek(char* st) {
    return st[strlen(st) - 1];
}

int main() {
    char Q[30] = "A+B*(C^D-E)^(F+G*H)-I";
    // char Q[30] = "A+(B*C-(D/E^F)*G)*H";
    // char Q[30] = "(A+B)^C-(D-E)^(F+G)";
    // char Q[30] = "A+B/C-D";
    // char Q[30] = "A+B*(D-C)+E^F+G";  //infix expression
    char P[20] = {};       //postfix expression
    char stack[30] = {};     //temporary stack
    push('(', stack); 
    push(')', Q);

    printf("INFIX: ");
    for (int i = 0; i < strlen(Q); i++) {
        printf("%c", Q[i]);
        char op = Q[i];

        if (!isoperator(op)) {
            push(op, P);
        } else if(isoperator(op)) {
            if (op == ')') {
                int chr = pop(stack);
                while (chr != '(') {
                    push(chr, P);
                    chr = pop(stack);
                }
            } else if (precedence(peek(stack)) < precedence(op) || op == '(') {
                push(op, stack);
            } else {
                while (precedence(peek(stack)) >= precedence(op)) {
                    push(pop(stack), P);
                }
                push(op, stack);
            }
        }
    }
    printf("\n\nPOSTFIX: ");
    for (int i = 0; i < strlen(P); i++) {
        printf("%c", P[i]);
    }
    return 0;
}