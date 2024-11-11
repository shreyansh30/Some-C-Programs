#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

void preorder(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void postorder(struct Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

struct Node* insert(struct Node* node, int data) {
    if (node == NULL)
        return newNode(data);

    if (data < node->data)
        node->left = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);

    return node;
}

struct Node* minValueNode(struct Node* node) {
    struct Node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

struct Node* deleteNode(struct Node* root, int key) {
    if (root == NULL)
        return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        struct Node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int search(struct Node* root, int key) {
    if (root == NULL)
        return 0;
    if (root->data == key)
        return 1;
    if (key < root->data)
        return search(root->left, key);
    return search(root->right, key);
}

int max(int a, int b) {
    return a > b ? a : b;
}

int height(struct Node* node) {
    if (node == NULL)
        return 0;
    return 1 + max(height(node->left), height(node->right));
}

int countLeafNodes(struct Node* node) {
    if (node == NULL)
        return 0;
    if (node->left == NULL && node->right == NULL)
        return 1;
    return countLeafNodes(node->left) + countLeafNodes(node->right);
}



int main() {
    struct Node* root = NULL;
    int choice, data, n;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    printf("Enter the data elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        root = insert(root, data);
    }

    do {
        printf("\nMenu:\n");
        printf("1. Preorder Traversal\n");
        printf("2. Inorder Traversal\n");
        printf("3. Postorder Traversal\n");
        printf("4. Search an Element\n");
        printf("5. Insert an Element\n");
        printf("6. Display Largest Element\n");
        printf("7. Display Smallest Element\n");
        printf("8. Height of a Node\n");
        printf("9. Count Leaf Nodes\n");
        printf("10. Delete an Element\n");
        printf("11. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                preorder(root);
                break;
            case 2:
                inorder(root);
                break;
            case 3:
                postorder(root);
                break;
            case 4:
                printf("Enter the element to search: ");
                scanf("%d", &data);
                if (search(root, data))
                    printf("%d found in the tree\n", data);
                else
                    printf("%d not found in the tree\n", data);
                break;
            case 5:
                printf("Enter the element to insert: ");
                scanf("%d", &data);
                root = insert(root, data);
                break;
            case 6:
                if (root != NULL) {
                    struct Node* temp = root;
                    while (temp->right != NULL)
                        temp = temp->right;
                    printf("Largest element: %d\n", temp->data);
                } else {
                    printf("Tree is empty\n");
                }
                break;
            case 7:
                if (root != NULL) {
                    struct Node* temp = root;
                    while (temp->left != NULL)
                        temp = temp->left;
                    printf("Smallest element: %d\n", temp->data);
                } else {
                    printf("Tree is empty\n");
                }
                break;
            case 8:
                printf("Enter the node to find height: ");
                scanf("%d", &data);
                if (search(root, data)) {
                    struct Node* temp = root;
                    while (temp != NULL) {
                        if (temp->data == data) {
                            printf("Height of %d: %d\n", data, height(temp));
                            break;
                        } else if (data < temp->data) {
                            temp = temp->left;
                        } else {
                            temp = temp->right;
                        }
                    }
                } else {
                    printf("%d not found in the tree\n", data);
                }
                break;
            case 9:
                printf("Number of leaf nodes: %d\n", countLeafNodes(root));
                break;
            case 10:
                printf("Enter the element to delete: ");
                scanf("%d", &data);
                root = deleteNode(root, data);
                break;
            case 11:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 11);

    return 0;
}