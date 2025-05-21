#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node* left;
    int data;
    struct node* right;
};
int main() {
    //(struct node*) malloc(sizeof(struct node));
    struct node* root = NULL;
    struct node* temp;
    struct node* newnode;
    int ch;
    int dt;
    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &ch);
        printf("BINARY SEARCH TREE by APURVA\n");
        printf("1. INSERT\n");
        printf("2. DELETE\n");
        printf("3. Inorder traversal\n");
        printf("4. Preorder traversal\n");
        printf("5. Postorder traversal\n");
        switch(ch) {
            case 1:
                printf("Enter the number to insert: ");
                scanf("%d", & dt);

                newnode = (struct node*) malloc(sizeof(struct node));
                newnode->left = NULL;
                newnode->right = NULL;
                newnode->data = dt;

                if (root == NULL) {
                    root = newnode;
                } else {
                    temp = root;
                    while (1) {
                        if (temp->data == newnode->data) {
                            printf("Can't insert (Value already exists..\n");
                        } else if (dt < temp->data) {
                            if (temp->left == NULL) {
                                temp->left = newnode;
                                printf("Node inserted successfully! \n");
                                break;
                            }
                            temp = temp->right;
                        } else if (dt > temp->data) {
                            if (temp->right == NULL) {
                                temp->right = newnode;
                                printf("Node inserted successfully! \n");
                                break;
                            }
                            temp = temp->right;
                        }
                    }
                }
                break;
            case 2:
                printf("Enter number to delete: ");
                scanf("%d", &dt);
                temp = root;
                while (1) {
                    if (dt == temp->data) {
                        if (childs(temp) == 0){
                            printf("BYE BYE");
                        }
                    }
                }
            default:
                printf("Invalid choice");

        }
    }
    return 0;
}