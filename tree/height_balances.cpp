#include <iostream>
#include <queue>
using  namespace std;
class node
{
public:
    node *left;
    node *right;
    int data;

    node(int val)
    {
        left = NULL;
        right = NULL;
        data = val;
    }
};
int max(int h1, int h2)
{

    if (h1 > h2)
        return h1;

    else
        return h2;
}
int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lheight = height(root->left);
    int rheight = height(root->right);

    return max(lheight, rheight) + 1;
}
int abs(int h)
{
    if (h < 0)
    {
        return -h;
    }
    else
        return h;
}
int balance_height(node *root)
{

    if (root == NULL)
    {
        return true;
    }
    int lheight = height(root->left);
    int rheight = height(root->right);
    if (abs(lheight - rheight) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
    if (balance_height(root->left) == false)
    {
        return false;
    }

    if (balance_height(root->right) == false)
    {
        return false;
    }
}
int main()
{

    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->left->left = new node(9);
    // root->left->right = new node(5);
    // root->right->left = new node(6);
    // root->right->right = new node(7);
    // cout<<"hello";
    cout<<balance_height(root);
}