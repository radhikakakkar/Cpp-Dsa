#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

node *insert_bst(node *root, int val)
{
    if (root == NULL)
    {
        return new node(val);
    }
    else if (val < root->data)
    {
        root->left = insert_bst(root->left, val);
        // return;
    }
    else
    {
        root->right = insert_bst(root->right, val);
        // return;
    }
    return root;
}

void inorder(node *root)
{

    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main()
{
    node *root = NULL;
    root = insert_bst(root, 5);
    insert_bst(root, 1);
    insert_bst(root, 3);
    insert_bst(root, 4);
    insert_bst(root, 2);
    insert_bst(root, 7);

    inorder(root);

    return 0;
}