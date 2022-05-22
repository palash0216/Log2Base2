// C++ program to demonstrate
// delete operation in binary
// search tree
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int key;
    struct node *left, *right;
};
struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
void traversetree(struct node *root)
{
    if (root != NULL)
    {
        traversetree(root->left);
        cout << root->key << " ";
        traversetree(root->right);
    }
}
// inorder traversal of BST
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}
struct node *insert(struct node *node, int key)
{

    if (node == NULL)
        return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);
    return node;
}
struct node *minValueNode(struct node *node)
{
    struct node *current = node;
    while (current && current->left != NULL)
        current = current->left;

    return current;
}
struct node *deleteNode(struct node *root, int key)
{

    if (root == NULL)
        return root;
    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    else
    {
        if (root->left == NULL and root->right == NULL)
            return NULL;
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
        struct node *temp = minValueNode(root->right);
        root->key = temp->key;
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}
int main()
{
    double start, _end, total;
    start = clock();

    struct node *root = NULL;
    root = insert(root, 23);
    insert(root, 45);
    insert(root, 62);
    insert(root, 7);
    insert(root, 22);
    insert(root, 29);
    insert(root, 16);
    insert(root, 36);
    insert(root, 10);
    insert(root, 95);

    cout << "Your BST : ";
    traversetree(root);
    cout << "\nInorder traversal of the given tree \n";
    inorder(root);
    cout << "\nDelete 29\n";
    root = deleteNode(root, 29);
    cout << "Inorder traversal of the modified tree \n";
    inorder(root);

    _end = clock();
    total = (_end - start) / CLOCKS_PER_SEC;
    cout << endl
         << "Total Time : " << total;
    return 0;
}