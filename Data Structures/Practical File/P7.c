#include <stdio.h>
#include <stdlib.h>
struct node {
    struct node* prev;
    int data;
    struct node* next;
};
int main() {
    printf("[DOUBLE]=[LINKED]=[LIST]=[MENU]\n");
    printf("1. Add node at beginning\n");
    printf("2. Add node at end\n");
    printf("3. Add after node value\n");
    printf("4. Add at location\n");
    printf("5. Delete from beginning\n");
    printf("6. Delete from end\n");
    printf("7. Delete from specific location\n");
    printf("8. Traverse\n");
    printf("9. Sort\n");
    printf("10. Reverse\n");
    printf("11. Exit\n");
    int ch, loc, val;
    struct node *start, *temp, *newnode, *nextnode, *prevn, *last;
    start = NULL;
    while(1) {
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: {
                newnode = (struct node*) malloc(sizeof(struct node));
                newnode->prev = NULL;
                newnode->next = start;
                if (start != NULL) {
                    start->prev = newnode;
                }
                printf("Enter node data: ");
                scanf("%d", &newnode->data);
                start = newnode;
                printf("Node added!\n");
                break;
            }
            case 2: {
                newnode = (struct node*) malloc(sizeof(struct node));
                newnode->next = NULL;
                printf("Enter node data: ");
                scanf("%d", &newnode->data);
                if (start == NULL) {
                    newnode->prev = NULL;
                    start = newnode;
                } else {
                    temp = start;
                    while (temp->next != NULL) {
                        temp = temp->next;
                    }
                    temp->next = newnode;
                    newnode->prev = temp;
                }
                printf("Node added!\n");
                break;
            }
            case 3: {
                printf("Enter a value from list: ");
                scanf("%d", &val);
                if (start == NULL) {
                    printf("Double Linked list is empty!\n");
                } else {
                    temp = start;
                    int found = 0;
                    while (temp != NULL) {
                        if (temp->data == val) {
                            found = 1;
                            break;
                        }
                        temp = temp->next;
                    }
                    if (!found) {
                        printf("Value not found in Double linked list!\n");
                    } else {
                        newnode = (struct node*) malloc(sizeof(struct node));
                        printf("Enter node data: ");
                        scanf("%d", &newnode->data);
                        newnode->next = temp->next;
                        newnode->prev = temp;
                        if (temp->next != NULL) {
                            temp->next->prev = newnode;
                        }
                        temp->next = newnode;
                        printf("Node added!\n");
                    }
                }
                break;
            }
            case 4: {
                printf("Enter location: ");
                scanf("%d", &loc);
                newnode = (struct node*) malloc(sizeof(struct node));
                printf("Enter node data: ");
                scanf("%d", &newnode->data);
                if (loc == 1) {
                    newnode->next = start;
                    newnode->prev = NULL;
                    start->prev = newnode;
                    start = newnode;
                } else {
                    temp = start;
                    int i = 1;
                    while (i != loc - 1 && temp->next != NULL) {
                        temp = temp->next;
                        i++;
                    }
                    newnode->next = temp->next;
                    newnode->prev = temp;
                    if (temp->next != NULL) {
                        temp->next->prev = newnode;
                    }
                    temp->next = newnode;
                }
                printf("Node added!\n");
                break;
            }
            case 5: {
                if (start == NULL) {
                    printf("Double Linked List is empty!\n");
                } else {
                    start = start->next;
                    if (start != NULL) {
                        start->prev = NULL;
                    }
                    printf("First Node Deleted!\n");
                }
                break;
            }
            case 6: {
                if (start == NULL) {
                    printf("Double Linked List is empty!\n");
                } else if (start->next == NULL) {
                    start = NULL;
                    printf("Last Node Deleted!\n");
                } else {
                    temp = start;
                    while(temp->next->next != NULL) {
                        temp = temp->next;
                    }
                    temp->next = NULL;
                    printf("Last Node Deleted!\n");
                }
                break;
            }
            case 7: {
                if (start == NULL) {
                    printf("Double Linked list is Empty!\n");
                } else {
                    printf("Enter location: ");
                    scanf("%d", &loc);
                    if (loc == 1) {
                        start = start->next;
                        start->prev = NULL;
                        printf("Node deleted!\n");
                    } else {
                        temp = start;
                        int i = 1;
                        while (i != loc - 1 && temp->next != NULL) {
                            temp = temp->next;
                            i++;
                        }
                        if (temp->next == NULL) {
                            printf("Invalid Location!\n");
                        } else {
                            if (temp->next->next != NULL) {
                                temp->next->next->prev = temp;
                            }
                            temp->next = temp->next->next;
                            printf("Node deleted!\n");
                        }
                    }
                }
                break;
            }
            case 8: {
                if (start == NULL) {
                    printf("Double Linked list is Empty!\n");
                } else {
                    temp = start;
                    while (temp->next != NULL) {
                        printf("[%d]=", temp->data);
                        temp = temp->next;
                    }
                    printf("[%d]\n", temp->data);
                }
                break;
            }
            case 9: {
                if (start == NULL || start->next == NULL) {
                    printf("Sorted!\n");
                } else {
                    int swapped;
                    last = NULL;
                    do {
                        swapped = 0;
                        temp = start;
            
                        while (temp->next != last) {
                            if (temp->data > temp->next->data) {
                                int tdata = temp->data;
                                temp->data = temp->next->data;
                                temp->next->data = tdata;
                                swapped = 1;
                            }
                            temp = temp->next;
                        }
                        last = temp;
                    } while (swapped);
            
                    printf("Double Linked List Sorted!\n");
                }
                break;
            }
            case 10: {
                if (start == NULL) {
                    printf("Double Linked list is Empty!\n");
                } else {
                    prevn = NULL;
                    temp = start;
                    while (temp != NULL) {
                        nextnode = temp->next;
                        temp->next = prevn;
                        temp->prev = nextnode;
                        prevn = temp;
                        temp = nextnode;
                    }
                    start = prevn;
                    printf("Double Linked List reversed!\n");
                }
                break;
            }
            case 11: {
                printf("\nApurva Kumar 04814902024\n");
                return 0;
            }
            default: {
                printf("Invalid choice!\n");
            }
        }
    }

    return 0;
}