#define SIZE 5
#include <stdio.h>
int main() {
    printf("|STACK USING ARRAY MENU|\n");
    printf("1. PUSH\n");
    printf("2. POP\n");
    printf("3. PEEP\n");
    printf("4. EXIT\n");
    int top = -1;
    int ch, data;
    int stack[SIZE];
    while (1) {
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1: {
                if (top == SIZE - 1) {
                    printf("Stack Overflow!\n");
                } else {
                    printf("Enter data: ");
                    scanf("%d", &data);
                    top++;
                    stack[top] = data;
                    printf("Element Pushed!\n");
                }
                break;
            }
            case 2: {
                if (top == -1) {
                    printf("Stack Underflow!\n");
                } else {
                    printf("Popped Element: %d\n", stack[top]);
                    top--;
                }
                break;
            }
            case 3: {
                if (top == -1) {
                    printf("Stack Empty!\n");
                } else {
                    for (int i = top; i > -1; i--) {
                        printf("|%d|\n", stack[i]);
                    }
                }
                break;
            }
            case 4: {
                printf("\nApurva Kumar 04814902024\n");
                return 0;
            }
            default: {
                printf("Invalid Choice!\n");
            }
        }
    }
}