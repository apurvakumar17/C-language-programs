#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
int main() {
    printf("--LINKED LIST--\n");
    printf("1. Add node at beginning.\n");
    printf("2. Add node at end.\n");
    printf("3. Add node at specific location.\n");
    printf("4. Add node after a specific value.\n");
    printf("5. Add node before a specific value.\n");
    printf("6. Delete node at beginning.\n");
    printf("7. Delete node at end.\n");
    printf("8. Delete node at specific location.\n");
    printf("9. Delete node with specific location.\n");
    printf("10. Reverse the list.\n");
    printf("11. Sort in ascending order\n");
    printf("12. Display linked list\n");
    printf("13. Exit\n");
    struct node* start = NULL;
    int ch;
    while (1) {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1: {
                struct node* ptr = (struct node*) malloc(sizeof(struct node));
                printf("Enter data: ");
                scanf("%d", &ptr->data);
                ptr->next = start;
                start = ptr;
                printf("Node added! \n");
                break;
            }
            case 2: {
                struct node* ptr = (struct node*) malloc(sizeof(struct node));
                printf("Enter data: ");
                scanf("%d", &ptr->data);
                ptr->next = NULL;
                struct node* temp = start;
                if (temp == NULL) {
                    start = ptr;
                    printf("Node Added!\n");
                    break;
                }
                while (temp->next != NULL) {
                    temp = temp->next;
                }
                temp->next = ptr;
                printf("Node Added!\n");
                break;
            }
            case 3: {
                struct node* ptr = (struct node*) malloc(sizeof(struct node));
                printf("Enter data: ");
                scanf("%d", &ptr->data);
                int c1, i = 1;
                printf("Enter location: ");
                scanf("%d", &c1);

                
                if (c1 == 1) {
                    ptr->next = start;
                    start = ptr;
                    printf("Node added at position %d!\n", c1);
                    break;
                }
            
                struct node* temp = start;
                while (temp != NULL && i < c1 - 1) {
                    temp = temp->next;
                    i++;
                }
            
                if (temp == NULL) {
                    printf("Invalid position! List has fewer nodes.\n");
                    free(ptr);
                } else {
                    ptr->next = temp->next;
                    temp->next = ptr;
                    printf("Node added at position %d!\n", c1);
                }
                break;
            }
            case 4: {
                struct node* ptr = (struct node*) malloc(sizeof(struct node));
                printf("Enter data: ");
                scanf("%d", &ptr->data);
                struct node* temp = start;
                int vl;
                printf("Enter value: ");
                scanf("%d", &vl);
                if (temp == NULL) {
                    ptr->next = NULL;
                    start = ptr;
                    printf("Node added! \n");
                    break;
                } else {
                    while (temp->next != NULL) {
                        if (temp->data == vl) {
                            break;
                        }
                        temp = temp->next;
                    }
                    ptr->next = temp->next;
                    temp->next = ptr;
                    printf("Node Added!\n");
                    break;
                }
            }
            case 5: {
                struct node* ptr = (struct node*) malloc(sizeof(struct node));
                printf("Enter data: ");
                scanf("%d", &ptr->data);
                struct node* pretemp;
                struct node* temp;
                pretemp = start;
                temp = start;
                int vl;
                printf("Enter value: ");
                scanf("%d", &vl);
                if (start == NULL) {
                    ptr->next = NULL;
                    start = ptr;
                    printf("Node Added!\n");
                    break;
                } else if(temp->data == vl) {
                    ptr->next = start;
                    start = ptr;
                    printf("Node Added!\n");
                    break;
                } else {
                    temp = temp->next;
                    while (temp->next != NULL) {
                        if (temp->data == vl) {
                            break;
                        }
                        temp = temp->next;
                        pretemp = pretemp->next;
                    }
                    ptr->next = pretemp->next;
                    pretemp->next = ptr;
                    printf("Node Added!\n");
                    break;
                }
            }
            case 6: {
                if (start == NULL) {
                    printf("Linked List Empty\n");
                    break;
                } else {
                    start = start->next;
                    printf("Node Deleted!!\n");
                    break;
                }
            }
            case 7: {
                struct node* temp = start;
                if (temp == NULL) {
                    printf("Linked List Empty!\n");
                } else if(temp->next == NULL) {
                    printf("Last Node Deleted!\n");
                    free(temp);
                    start = NULL;
                } else {
                    while (temp->next->next != NULL) {
                        temp = temp->next;
                    }
                    free(temp->next);
                    temp->next = NULL;
                    printf("Last Node Deleted!\n");
                }
                break;
            }
            case 8: {
                int loc = 0;
                struct node* temp = start;
                struct node* ptemp = start;
                printf("Enter the location: ");
                scanf("%d", &loc);
                if (loc == 1) {
                    start = temp->next;
                    free(temp);
                    printf("Node Deleted!\n");
                    break;
                } else {
                    temp = temp->next;
                    while (loc != 2) {
                        temp = temp->next;
                        ptemp = ptemp->next;
                        loc--;
                    }
                    ptemp->next = temp->next;
                    free(temp);
                    printf("Node Deleted!\n");
                    break;
                }
                
            }
            case 9: {
                int value;
                printf("Enter value to delete: ");
                scanf("%d", &value);
                struct node* ptemp = start;
                struct node* temp = start;
                if (temp->data == value) {
                    start = temp->next;
                    free(temp);
                    printf("Node Deleted!\n");
                    break;
                } else {
                    temp = temp->next;
                    while(temp->data != value) {
                        temp = temp->next;
                        ptemp = ptemp->next;
                    }
                    ptemp->next = temp->next;
                    free(temp);
                    printf("Node Deleted!\n");
                    break;
                }
            }
            case 10: {
                struct node* prev = NULL;
                struct node* curr = start;
                struct node* nxt = NULL;

                if (start == NULL) {
                    printf("Linked List is Empty!\n");
                    break;
                } else if (start->next == NULL) {
                    printf("Only single element!\n");
                    break;
                } else {
                    while (curr != NULL) {
                        nxt = curr->next;
                        curr->next = prev;
                        prev = curr;
                        curr = nxt;
                    }

                    start = prev;
                    printf("Linked List Reversed!\n");
                    break;
                }

                
                
            }
            case 12: {
                if (start == NULL) {
                    printf("Linked list is empty\n");
                    break;
                }
                struct node* temp = start;
                while (temp->next != NULL) {
                    printf("[%d]-", temp->data);
                    temp = temp->next;
                }
                printf("[%d]\n", temp->data);
                break;
            }
            case 13: {
                if (start == NULL) {
                    printf("\nGood Bye!! -by APURVA KUMAR");
                    return 0;
                }
                struct node* temp = start->next;
                while (temp->next != NULL) {
                    free(start);
                    start = temp;
                    temp = temp->next;
                }
                free(start);
                printf("Memory freed");
                printf("\nGood Bye!! -by APURVA KUMAR");
                return 0;
            }
            default: {
                printf("Invalid Input!\n");
            }
        }
    }
}