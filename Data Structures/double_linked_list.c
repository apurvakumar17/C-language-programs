#include <stdio.h>
#include <stdlib.h>
struct node {
    struct node* prev;
    int data;
    struct node* next;
};
int main() {
    printf("[DOUBLE]=[LINKED]=[LIST]\n");
    printf("1. Add node at beginning\n");
    printf("2. Add node at end\n");
    printf("3. Add node at loc\n");
    printf("4. Add node before value\n");
    printf("5. Add node after value\n");
    printf("6. Delete from beginning\n");
    printf("7. Delete from end\n");
    printf("8. Delete from loc\n");
    printf("9. Delete from value\n");
    printf("10. Display\n");
    printf("11. Sort\n");
    printf("12. Reverse Display\n");
    printf("13. Exit\n");
    int ch, loc, val, len;
    struct node *start, *temp, *newnode;
    start = NULL;
    while (1) {
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: 
                newnode = (struct node*) malloc(sizeof(struct node));
                printf("Enter data of newnode: ");
                scanf("%d", &newnode->data);
                newnode->prev = NULL;
                if (start == NULL) {
                    newnode->next = NULL;
                    start->prev = newnode;
                    start = newnode;
                } else {
                    newnode->next = start;
                    start->prev = newnode;
                    start = newnode;
                }
                len++;
                printf("Node added at beginning!\n");
                break;
            case 2:
                newnode = (struct node*) malloc(sizeof(struct node));
                printf("Enter data of newnode: ");
                scanf("%d", &newnode->data);
                newnode->next = NULL;
                temp = start;
                if (temp == NULL) {
                    newnode->prev = NULL;
                    start = newnode;
                } else {
                    while (temp->next != NULL) {
                        temp = temp->next;
                    }
                    temp->next = newnode;
                    newnode->prev = temp;
                }
                len++;
                printf("Node added at end!\n");
                break;
            case 3:
                newnode = (struct node*) malloc(sizeof(struct node));
                printf("Enter data of newnode: ");
                scanf("%d", &newnode->data);
                printf("Enter location: ");
                scanf("%d", &loc);
                temp = start;
                if (start == NULL) {
                    newnode->next = NULL;
                    newnode->prev = NULL;
                    start = newnode;
                } else {
                    for (int i = 1; i < loc; i++) {
                        temp = temp->next;
                    }
                    if (temp == start) {
                        temp->prev = newnode;
                        newnode->next = temp;
                        start = newnode;
                    } else {
                        temp->prev->next = newnode;
                        temp->next->prev = newnode;
                        newnode->prev = temp;
                        newnode->next = temp->next;
                    }
                }
                len++;
                printf("Node added at location!\n");
                break;
            case 4:
                newnode = (struct node*) malloc(sizeof(struct node));
                printf("Enter data of newnode: ");
                scanf("%d", &newnode->data);
                printf("Enter value: ");
                scanf("%d", &val);
                temp = start;
                if(start == NULL) {
                    newnode->next = NULL;
                    newnode->prev = NULL;
                    start = newnode;
                } else {
                    while(temp->data != val) {
                        temp = temp->next;
                    }
                    if(temp == start) {
                        temp->prev = newnode;
                        newnode->next = temp;
                        start = newnode;
                    } else {
                        temp->prev->next = newnode;
                        temp->prev = newnode;
                        newnode->prev = temp->prev;
                        newnode->next = temp;
                    }
                }
                len++;
                printf("Node added!\n");
                break;
            case 5:
                newnode = (struct node*) malloc(sizeof(struct node));
                printf("Enter data of newnode: ");
                scanf("%d", &newnode->data);
                printf("Enter value: ");
                scanf("%d", &val);
                temp = start;
                if(start == NULL) {
                    newnode->next = NULL;
                    newnode->prev = NULL;
                    start = newnode;
                } else {
                    temp = start;
                    while(temp->data != val) {
                        temp = temp->next;
                    }
                    if (temp == start) {
                        newnode->next = NULL;
                        temp->next = newnode;
                        newnode->prev = temp;
                    } else {
                        temp->next->prev = newnode;
                        newnode->next = temp->next;
                        newnode->prev = temp;
                        temp->next = newnode;
                    }

                }
                len++;
                printf("Node added!\n");
                break;
            case 6:
                temp = start;
                if (temp == NULL) {
                    printf("Linked List is Empty!\n");
                    break;
                } else {
                    start = start->next;
                }
                len--;
                printf("First Node Deleted!\n");
                break;
            case 7:
                temp = start;
                if (temp ==NULL) {
                    printf("Linked List is empty!\n");
                    break;
                } else {
                    while (temp->next != NULL) {
                        temp = temp->next;
                    }
                    temp->prev->next = NULL;
                }
                len--;
                printf("Last Node Deleted!\n");
                break;
            case 8:
                temp = start;
                if (temp == NULL) {
                    printf("Linked List is empty!\n");
                } else {
                    printf("Enter the location: ");
                    scanf("%d", &loc);
                    if (loc > len || loc <= 0) {
                        printf("Invalid location!\n");
                        break;
                    } else {
                        for (int i = 1; i < loc; i++) {
                            temp = temp->next;
                        }
                        if (temp == start) {
                            start = start->next;
                        } else if (temp->next == NULL) {
                            temp->prev->next = NULL;
                        } else {
                            temp->prev->next = temp->next;
                            temp->next->prev = temp->prev;
                        }
                    }
                }
                printf("Node at location deleted!\n");;
                break;
            case 9:
                temp = start;
                if (temp == NULL) {
                    printf("Linked List is Empty!\n");
                    break;
                } else {
                    int found = 0;
                    printf("Enter the value to delete: ");
                    scanf("%d", &val);
                    while (temp->data != val || temp->next != NULL) {
                        temp = temp->next;
                    }
                    if (temp->data == val) {
                        found = 1;
                    }
                    if (temp->next == NULL) {
                        if (!found) {
                            printf("Value not found in linked list!\n");
                            break;
                        }
                        temp->prev->next = NULL;
                    } else {
                        temp->prev->next = temp->next;
                        temp->next->prev = temp->prev;
                    }
                    printf("Node Deleted!\n");
                }
                break;
            case 10:
                if (start == NULL) {
                    printf("Double Linked List is Empty!\n");
                    break;
                } else {
                    temp = start;
                    while (temp->next != NULL) {
                        printf("[%d]-", temp->data);
                        temp = temp->next;
                    }
                    printf("[%d]",temp->data);
                }
                break;
            case 11:
                
                
        }
    }
}