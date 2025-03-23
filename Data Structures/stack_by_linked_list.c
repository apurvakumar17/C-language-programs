#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

int main() {
    int ch, maxlen, len;
    len = 0;
    struct node *top, *newnode, *temp;
    printf("Enter max size of stack: ");
    scanf("%d", &maxlen);
    printf("\nSTACK BY LINKED LIST\n");
    printf("1. PUSH\n");
    printf("2. POP\n");
    printf("3. PEEP\n");
    printf("4. EXIT\n");
    top = NULL;
    while(1) {
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1: {
                if (len < maxlen) {
                    newnode = (struct node*) malloc(sizeof(struct node));
                    printf("Enter data: ");
                    scanf("%d", &newnode->data);
                    newnode->next = top;
                    top = newnode;
                    len++;
                    printf("ELEMENT PUSHED!\n");
                } else {
                    printf("STACK OVERFLOW!\n");
                }
                break;
            }
            case 2: {
                if (len == 0) {
                    printf("STACK UNDERFLOW!\n");
                } else {
                    printf("ELEMENT POPED: %d\n", top->data);
                    top = top->next;
                    len--;
                }
                break;
            }
            case 3: {
                temp = top;
                if(top == NULL) {
                    printf("STACK EMPTY!\n");
                } else {
                    while (temp->next != NULL) {
                        printf("|%d|\n", temp->data);
                        temp = temp->next;
                    }
                    printf("|%d|\n",temp->data);
                }
                break;
            }
            case 4: {
                printf("BYE APURVA!");
                return(0);
            }
            default: {
                printf("INVALID CHOICE!\n");
            }
        }
    }
    return 0;
}