#define SIZE 5
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
int main() {
    printf("|STACK USING LINKED LIST MENU|\n");
    printf("1. PUSH\n");
    printf("2. POP\n");
    printf("3. PEEP\n");
    printf("4. EXIT\n");
    int top = -1;
    int ch, data;
    int stack[SIZE];
    struct node *newnode, *start, *temp;
    start = NULL;
    while (1) {
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1: {
                if (top == SIZE - 1) {
                    printf("Stack Overflow!\n");
                } else {
                    newnode = (struct node*) malloc(sizeof(struct node));
                    newnode->next = start;
                    start = newnode;
                    printf("Enter node data: ");
                    scanf("%d", &newnode->data);
                    top++;
                    printf("Element Pushed!\n");
                }
                break;
            }
            case 2: {
                if (top == -1) {
                    printf("Stack Underflow!\n");
                } else {
                    printf("Popped Element %d\n", start->data);
                    start = start->next;
                    top--;
                }
                break;
            }
            case 3: {
                if (top == -1) {
                    printf("Stack Empty!\n");
                } else {
                    temp = start;
                    for (int i = top; i > -1; i--) {
                        printf("|%d|\n", temp->data);
                        temp = temp->next;
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