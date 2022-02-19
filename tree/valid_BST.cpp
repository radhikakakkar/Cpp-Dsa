#include <iostream>
#include <climits>
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
bool isBST(node *root, node *min, node *max)
{
    if (root == NULL)
    {
        return true;
    }
    if (min != NULL && root->data <= min->data)
    {
        return false;
    }
    if (max != NULL && root->data >= max->data)
    {
        return false;
    }
    // min = new node(INT_MIN);
    // max = new node(INT_MAX);
    // min = new node(INT_MIN);
    bool leftValid = isBST(root->left, min, root);
    // max = new node(INT_MAX);
    bool rightValid = isBST(root->right, root, max);

    return leftValid and rightValid;
}

int main()
{
    node *root = new node(3);
    root->left = new node(2);
    root->left = new node(5);

    if (isBST(root, NULL, NULL))
    {
        cout << "valid BST" << endl;
    }
    else
    {
        cout << "invalid bst" << endl;
    }

    return 0;
}
