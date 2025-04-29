#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

void inorderprint(struct node* bud) {
    //Follow LDR

    if(bud->left != NULL) {
        inorderprint(bud->left);
    }
    printf("%d, ", bud->data);
    if(bud->right != NULL) {
        inorderprint(bud->right);
    }
}

struct node* find(struct node* bud, int num) {
    if (bud == NULL) {
        return bud;
    } else if (bud->data == num) {
        return bud;
    } else if (bud->data < num) {
        find(bud->right, num);
    } else if (bud->data > num) {
        find(bud->left, num);
    }
}

int main() {
    struct node* root = NULL;
    struct node* newnode;
    struct node* temp;
    int ch;
    printf("Binary Search Tree MENU by Apurva Kumar\n");
    printf("1. Insert a Node\n");
    printf("2. Traverse the Tree\n");
    printf("3. Search a Value\n");
    while(1) {
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1: {
                newnode = (struct node*) malloc(sizeof(struct node));
                printf("Enter data: ");
                scanf("%d", &newnode->data);
                newnode->left = NULL;
                newnode->right = NULL;
                if (root == NULL) {
                    root = newnode;
                    printf("Node Inserted Successfully!\n");
                } else {
                    int dup = 0;
                    temp = root;
                    while (1) {
                        if (temp->data == newnode->data) {
                            printf("Can't insert..Duplicate value\n");
                            dup = 1;
                            break;
                        } else if(newnode->data < temp->data) {
                            if (temp->left == NULL) {
                                temp->left = newnode;
                                printf("Node Inserted Successfully!\n");
                                break;
                            }
                            temp = temp->left;
                        } else {
                            if (temp->right == NULL) {
                                temp->right = newnode;
                                printf("Node Inserted Successfully!\n");
                                break;
                            }
                            temp = temp->right;
                        }
                    }
                }
                break;
            }
            case 2: { //LDR is inorder
                temp = root;
                if (temp == NULL) {
                    printf("BST is Empty..\n");
                    break;
                } else {
                    inorderprint(temp);
                    printf("\n");
                    break;
                }
                break;
            }
            case 3: {
                int numts;
                printf("Enter number to search: ");
                scanf("%d", &numts);
                temp = root;
                if (temp == NULL) {
                    printf("BST is Empty..\n");
                    break;
                } else {
                    if (find(temp, numts)) {
                        printf("%d found in BST!\n");
                    } else {
                        printf("%d not found in BST!\n");
                    }
                    break;
                }
                break;
            }
            default:
                printf("Invalid Choice..\n");
                return 0;
        }
    }
}