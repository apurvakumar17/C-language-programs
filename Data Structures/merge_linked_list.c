#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
int main() {
    printf("[LINKED]-[LIST]\n");
    printf("1. Add node at the end in list 1\n");
    printf("2. Add node at the end in list 2\n");
    printf("3. Sort List 1 and display\n");
    printf("4. Sort List 2 and display\n");
    printf("5. Merge lists\n");
    printf("6. Display Merged List\n");
    printf("7. Exit\n");
    int ch;
    struct node* start1, *start2, *newnode, *temp, *pretemp, *start3, *temp1, *temp2;
    start1 = NULL;
    start2 = NULL;
    start3 = NULL;
    while(1) {
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                newnode = (struct node*) malloc(sizeof(struct node));
                printf("Enter data of newnode: ");
                scanf("%d", &newnode->data);
                newnode->next = NULL;
                temp = start1;
                if(temp == NULL) {
                    start1 = newnode;
                    printf("Node added at end of List 1\n");
                    break;
                }
                while(temp->next != NULL) {
                    temp = temp->next;
                }
                temp->next = newnode;
                printf("Node added at end of List 1\n");
                break;
            case 2:
                newnode = (struct node*) malloc(sizeof(struct node));
                printf("Enter data of newnode: ");
                scanf("%d", &newnode->data);
                newnode->next = NULL;
                temp = start2;
                if(temp == NULL) {
                    start2 = newnode;
                    printf("Node added at end of List 2\n");
                    break;
                }
                while(temp->next != NULL) {
                    temp = temp->next;
                }
                temp->next = newnode;
                printf("Node added at end of List 2\n");
                break;
            case 3:
                if(start1 == NULL || start1->next == NULL) {
                    printf("Can't Sort!!\n");
                    break;
                } else {
                    int swapped;
                    int temp_data;
                    do {
                        swapped = 0;
                        pretemp = start1;
                        temp = start1->next;
                        while(temp != NULL) {
                            if (pretemp->data > temp->data) {
                                temp_data = pretemp->data;
                                pretemp->data = temp->data;
                                temp->data = temp_data;
                                swapped = 1;
                            }
                            pretemp = pretemp->next;
                            temp = temp->next;
                        }
                    } while(swapped);
                    
                }

                temp = start1;
                while(temp->next != NULL) {
                    printf("[%d]-", temp->data);
                    temp = temp->next;
                }
                printf("[%d]\n", temp->data);
                break;
            case 4:
                if(start2 == NULL || start2->next == NULL) {
                    printf("Can't Sort!!\n");
                    break;
                } else {
                    int temp_data, swapped;
                    do {
                        swapped = 0;
                        pretemp = start2;
                        temp = start2->next;
                        while (temp != NULL) {
                            if (pretemp->data > temp->data) {
                                temp_data = temp->data;
                                temp->data = pretemp->data;
                                pretemp->data = temp_data;
                                swapped = 1;
                            }
                            pretemp = pretemp->next;
                            temp = temp->next;
                        }
                    } while(swapped);
                }

                temp = start2;
                while(temp->next != NULL) {
                    printf("[%d]-", temp->data);
                    temp = temp->next;
                }
                printf("[%d]\n", temp->data);
                break;

            case 5:
                if (start1 == NULL && start2 == NULL) {
                    printf("Both lists are empty. Cannot merge!\n");
                    break;
                }
            
                temp1 = start1;
                temp2 = start2;
                start3 = NULL;
                temp = start3;
            
                while (temp1 != NULL && temp2 != NULL) {
                    newnode = (struct node*) malloc(sizeof(struct node));
                    newnode->next = NULL;
            
                    if (temp1->data < temp2->data) {
                        newnode->data = temp1->data;
                        temp1 = temp1->next;
                    } else {
                        newnode->data = temp2->data;
                        temp2 = temp2->next;
                    }
            
                    if (start3 == NULL) {
                        start3 = newnode;
                        temp = start3;
                    } else {
                        temp->next = newnode;
                        temp = temp->next;
                    }
                }
            
                while (temp1 != NULL) {
                    newnode = (struct node*) malloc(sizeof(struct node));
                    newnode->data = temp1->data;
                    newnode->next = NULL;
                    if (temp == NULL) {
                        start3 = newnode;
                        temp = start3;
                        temp1 = temp1->next;
                    } else {
                        temp->next = newnode;
                        temp = temp->next;
                        temp1 = temp1->next;
                    }
                    
                }
            
                while (temp2 != NULL) {
                    newnode = (struct node*) malloc(sizeof(struct node));
                    newnode->data = temp2->data;
                    newnode->next = NULL;
                    if (temp == NULL) {
                        start3 = newnode;
                        temp = start3;
                        temp2 = temp2->next;
                    } else {
                        temp->next = newnode;
                        temp = temp->next;
                        temp2 = temp2->next;
                    }
                    
                }
            
                printf("Lists Merged Successfully!\n");
                break;
            case 6: 
                if (start3 == NULL) {
                    printf("Merged List is empty!!\n");
                } else {
                    temp = start3;
                    while(temp->next != NULL) {
                        printf("[%d]-", temp->data);
                        temp = temp->next;
                    }
                    printf("[%d]\n", temp->data);
                }
                break;
            case 7:
                printf("Bye Apurva Kumar");
                return 0;
            default: 
                printf("Invalid Choice!!\n");

        }
    }
}
