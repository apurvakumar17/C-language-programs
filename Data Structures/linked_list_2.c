#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
int main() {
    int ch;
    struct node* head = NULL;
    printf("\n[]-[LINKED]-[LIST]-[MENU]-[]");
    printf("\n1. Enter element at beginning");
    printf("\n2. Enter element at end");
    printf("\n3. Search an element");
    printf("\n4. Delete an element");
    printf("\n5. Display linked list");
    printf("\n6. Exit");
    while(1) {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: {
                struct node* ptr = (struct node*) malloc(sizeof(struct node));
                if (ptr == NULL) {
                    printf("Node creation failed");
                    break;
                }
                printf("Enter data to store: ");
                scanf("%d", &ptr->data);
                ptr->next = head;
                head = ptr;
                printf("Node added at beginning!\n");
                break;
            }
            case 2: {
                struct node* ptr = (struct node*) malloc(sizeof(struct node));
                if (ptr == NULL) {
                    printf("Node creation failed");
                    break;
                }
                printf("Enter data to store: ");
                scanf("%d", &ptr->data);
                ptr->next = NULL;
                if (head == NULL) {
                    head = ptr;
                    break;
                }
                struct node* temp = head;
                while (temp->next != NULL) {
                    temp = temp->next;
                }
                temp->next = ptr;
                printf("Node added at end!\n");
                break;
            }
            case 3: {
                if (head == NULL) {
                    printf("Linked list is empty\n");
                    break;
                }
                struct node* temp = head;
                int dt, flg;
                flg = 0;
                printf("Enter element to search: ");
                scanf("%d", &dt);
                while(temp->next != NULL) {
                    if (temp->data == dt) {
                        flg = 1;
                        break;
                    }
                    temp = temp->next;
                }
                if (flg == 1 || temp->data == dt) {
                    printf("Element [%d] found in node at %d\n",temp->data, temp);
                } else {
                    printf("Element not found in linked list\n");
                }
                break;
            }
            case 4: {
                if (head == NULL) {
                    printf("Linked list is empty\n");
                    break;
                }
                struct node* m1temp = head;
                struct node* temp = head->next;
                int dt, flg;
                flg = 0;
                printf("Enter element to delete: ");
                scanf("%d", &dt);
                if (temp == NULL && m1temp->data != dt) {
                    printf("Element not found in linked list!\n");
                    break;
                }
                if (m1temp->data == dt) {
                    head = head->next;
                    free(m1temp);
                    printf("Node deleted!\n");
                    break;
                }
                while(temp->next != NULL) {
                    if (temp->data == dt) {
                        flg = 1;
                        break;
                    }
                    m1temp = temp;
                    temp = temp->next;

                }
                if (flg == 1 || temp->data == dt) {
                    m1temp->next = temp->next;
                    free(temp);
                } else {
                    printf("Element not found in linked list!\n");
                    break;
                }
                printf("Node deleted!\n");
                break;
            }
            case 5: {
                if (head == NULL) {
                    printf("Linked list is empty\n");
                    break;
                }
                struct node* temp = head;
                while (temp->next != NULL) {
                    printf("[%d]-", temp->data);
                    temp = temp->next;
                }
                printf("[%d]\n", temp->data);
                break;
            }
            case 6: {
                if (head == NULL) {
                    printf("\nGood Bye!!");
                    return 0;
                }
                struct node* temp = head->next;
                while (temp->next != NULL) {
                    free(head);
                    head = temp;
                    temp = temp->next;
                }
                free(head);
                printf("Memory freed");
                printf("\nGood Bye!! -by APURVA KUMAR");
                return 0;
            }
            default: {
                printf("Invalid choice!");
            }
        }
    }
}