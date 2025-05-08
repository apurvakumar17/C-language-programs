#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

// Inorder Traversal (LDR)
void inorderprint(struct node* bud) {
    if (bud == NULL) return;
    inorderprint(bud->left);
    printf("%d ", bud->data);
    inorderprint(bud->right);
}

// Preorder Traversal (DLR)
void preorderprint(struct node* bud) {
    if (bud == NULL) return;
    printf("%d ", bud->data);
    preorderprint(bud->left);
    preorderprint(bud->right);
}

// Postorder Traversal (LRD)
void postorderprint(struct node* bud) {
    if (bud == NULL) return;
    postorderprint(bud->left);
    postorderprint(bud->right);
    printf("%d ", bud->data);
}

// Search
struct node* find(struct node* bud, int num) {
    if (bud == NULL) {
        return NULL;
    } else if (bud->data == num) {
        return bud;
    } else if (bud->data < num) {
        return find(bud->right, num);
    } else {
        return find(bud->left, num);
    }
}

// Find minimum value node (used in delete)
struct node* findMin(struct node* bud) {
    while (bud->left != NULL) {
        bud = bud->left;
    }
    return bud;
}

// Delete a node
struct node* deleteNode(struct node* root, int key) {
    if (root == NULL) return NULL;

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        // Node to be deleted found
        if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        } else {
            struct node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}

int main() {
    struct node* root = NULL;
    struct node* newnode;
    struct node* temp;
    int ch;

    printf("Binary Search Tree MENU by Apurva Kumar\n");
    printf("1. Insert a Node\n");
    printf("2. Inorder Traversal (LDR)\n");
    printf("3. Search a Value\n");
    printf("4. Delete a Node\n");
    printf("5. Preorder Traversal (DLR)\n");
    printf("6. Postorder Traversal (LRD)\n");
    printf("0. Exit\n");

    while (1) {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
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
                    temp = root;
                    while (1) {
                        if (newnode->data == temp->data) {
                            printf("Can't insert..Duplicate value\n");
                            free(newnode);
                            break;
                        } else if (newnode->data < temp->data) {
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

            case 2: {
                if (root == NULL) {
                    printf("BST is Empty..\n");
                } else {
                    printf("Inorder Traversal: ");
                    inorderprint(root);
                    printf("\n");
                }
                break;
            }

            case 3: {
                int numts;
                printf("Enter number to search: ");
                scanf("%d", &numts);
                if (root == NULL) {
                    printf("BST is Empty..\n");
                } else {
                    if (find(root, numts)) {
                        printf("%d found in BST!\n", numts);
                    } else {
                        printf("%d not found in BST!\n", numts);
                    }
                }
                break;
            }

            case 4: {
                int delval;
                printf("Enter value to delete: ");
                scanf("%d", &delval);
                if (find(root, delval)) {
                    root = deleteNode(root, delval);
                    printf("%d deleted from BST.\n", delval);
                } else {
                    printf("Value not found in BST.\n");
                }
                break;
            }

            case 5: {
                if (root == NULL) {
                    printf("BST is Empty..\n");
                } else {
                    printf("Preorder Traversal: ");
                    preorderprint(root);
                    printf("\n");
                }
                break;
            }

            case 6: {
                if (root == NULL) {
                    printf("BST is Empty..\n");
                } else {
                    printf("Postorder Traversal: ");
                    postorderprint(root);
                    printf("\n");
                }
                break;
            }

            case 0: {
                printf("Exiting...\n");
                printf("\nApurva Kumar 04814902024\n");
                return 0;
            }

            default:
                printf("Invalid Choice..\n");
                break;
        }
    }
}
