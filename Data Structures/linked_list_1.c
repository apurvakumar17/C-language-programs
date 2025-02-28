#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
int main() {
    int dt,ch;
    struct node* head = NULL;
    while(1) {
        printf("\n__LINKED LIST__");
        printf("\n1. Enter data at beginning.");
        printf("\n2. Enter data at end.");
        printf("\n11. Display linked list.");
        printf("\n12. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1: {
                struct node* ptr = (struct node*) malloc(sizeof(struct node));
                printf("Enter data to store: ");
                scanf("%d", &dt);
                ptr->data = dt;
                ptr->next = head;
                head = ptr;
                printf("\nNode added at beginning!");
                break;
            }
            case 2: {
                struct node* ptr = (struct node*) malloc(sizeof(struct node));
                struct node* temp = head;
                printf("Enter data to store: ");
                scanf("%d", &dt);
                ptr->data = dt;
                ptr->next = NULL;
                if (head == NULL) {
                    head = ptr;
                    break;
                }
                while(temp->next != NULL) {
                    temp = temp->next;
                }
                temp->next = ptr;
                printf("\nNode added at ending!");
                break;
            }
            case 11: {
                if (head == NULL) {
                    printf("\nLinked List is Empty");
                    break;
                }
                struct node* temp = head;
                while(temp->next != NULL) {
                    printf("[%d]-", temp->data);
                    temp = temp->next;
                }
                printf("[%d]\n", temp->data);
                break;
            }
            case 12: {
                printf("Good Bye\nBy Apurva Kumar");
                return 0;
            }
            default: 
                printf("Invalid Option...Choose Again!");
        }
    }
}