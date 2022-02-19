#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int val;
    node *left;
    node *right;

    node(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};
void sum_replace(node *root)
{
    if (root == NULL)
    {
        return;
    }
    sum_replace(root->left);
    sum_replace(root->right);
    if (root->left != NULL)
    {
        root->val += root->left->val;
    }
    if (root->right != NULL)
    {
        root->val += root->right->val;
    }
}
void level_order(node *root)
{

    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *node = q.front();
        q.pop();
        if (node != NULL)
        {
            cout << node->val << " ";
            if (node->left != NULL)
            {
                q.push(node->left);
            }
            if (node->right != NULL)
            {
                q.push(node->right);
            }
            else
            {
                q.push(NULL);
            }
        }
    }
}

int main()
{

    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    level_order(root);
    cout<<endl;
    sum_replace(root);
    cout<<endl;
    level_order(root);
}