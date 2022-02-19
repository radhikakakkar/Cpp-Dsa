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
node *search_bst(node *root, int val)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == val)
    {
        return root;
    }
    if (root->data > val)
    {
        return search_bst(root->left, val);
    }

    return search_bst(root->right, val);
}

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

int main()
{
    node *root = NULL;
    root = insert_bst(root, 9);
    insert_bst(root, 1);
    insert_bst(root, 3);
    insert_bst(root, 4);
    insert_bst(root, 2);
    insert_bst(root, 7);

    if (search_bst(root, 5) == NULL)
    {
        cout << "key doesn't exist" << endl;
    }
    else
    {
        cout << "key exists" << endl;
    }
}