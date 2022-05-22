#include <stdio.h>
#include <stdlib.h>

struct node
{
    int key;
    struct node *left;
    struct node *right;
};

int getRightMin(struct node *root)
{
    // Write your code here
    struct node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp->key;
}

struct node *removeNode(struct node *root, int val)
{
    // Write your code here

    if (root == NULL)
        return NULL;
    if (root->key < val)
        root->right = removeNode(root->right, val);
    else if (root->key > val)
        root->left = removeNode(root->left, val);
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }
        else if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        else
        {
            int rightMin = getRightMin(root->right);
            root->key = rightMin;
            root->right = removeNode(root->right, rightMin);
        }
    }
    return root;
}

// Don't change the below code
struct node *getNewNode(int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->key = val;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

struct node *insert(struct node *root, int val)
{
    if (root == NULL)
        return getNewNode(val);
    if (root->key < val)
        root->right = insert(root->right, val);
    else if (root->key > val)
        root->left = insert(root->left, val);

    return root;
}

void inorder(struct node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->key);
    inorder(root->right);
}

int main()
{
    struct node *root = NULL;
    root = insert(root, 100);
    root = insert(root, 50);
    root = insert(root, 200);
    root = insert(root, 150);
    root = insert(root, 300);

    int key;
    scanf("%d", &key);

    root = removeNode(root, key);
    inorder(root);

    return 0;
}