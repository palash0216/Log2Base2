// Cpp program to insert,search,delete;
#include <iostream>
#include <stdlib.h>
#include <direct.h>
#include <time.h>
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
struct node *search(struct node *root, int key)
{
    if (root == NULL || root->key == key)
        return root;
    if (root->key < key)
        return search(root->right, key);
    return search(root->left, key);
}
struct node *insert(struct node *node, int key)
{
    if (node == NULL)
        return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    return node;
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
    printf("The tree is :\n");
    traversetree(root);
    cout << "\nSearching for 12 in this tree ";
    if (search(root, 22))
        cout << "\nelement found";
    else
        cout << "\nelement not found";
    _end = clock();
    total = (_end - start) / CLOCKS_PER_SEC;
    cout << endl
         << "Total Time : " << total;

    return 0;
}
