#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct node* insert_beg(struct node* head, int data1) {
    struct node* ptr = (struct node*) malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("Memory Allocation Failed.");
        return head;
    }
    ptr -> data = data1;
    ptr -> next = head;
    return ptr;
}
struct node* insert_end(struct node* head, int data1) {
    struct node* ptr = (struct node*) malloc(sizeof(struct node));
    struct node* temp = head;
    if (ptr == NULL) {
        printf("Memory Allocation Failed.");
        return head;
    }
    while (temp -> next == NULL) {
        temp = temp -> next;
    }
    temp->next = ptr;
    return head;
}
void display(struct node* head) {
    if (head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }
    struct node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    struct node* head = NULL;
    int ch, data;
    while (1) {
        printf("\n1. Add node at beginning\n");
        printf("2. Add node at end\n");
        printf("3. Display Linked List\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1: 
                printf("Enter data: ");
                scanf("%d", &data);
                head = insert_beg(head, data);
                printf("Data inserted to linked list...");
                break;
            case 2:
                printf("Enter data: ");
                scanf("%d", &data);
                head = insert_end(head, data);
                printf("Data inserted to linked list...");
                break;
            case 3:
                display(head);
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}