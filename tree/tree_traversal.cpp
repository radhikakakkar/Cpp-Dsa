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

void preorder(node *&root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node *&root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

void postorder(node *&root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}
void level_order_traversal(node *root)

{
    if (root == NULL)
    {
        return;
    }
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

    return;
}

int sum_at_level(node *root, int k)
{

    if (root == NULL)
    {
        return -1;
    }

    queue<node *> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum = 0;

    while (!q.empty())
    {

        node *node = q.front();
        q.pop();

        if (node != NULL)
        {
            if (level == k)
            {
                sum = +node->val;
            }
            if (node->left != NULL)
            {
                q.push(node->left);
            }
            if (node->right != NULL)
            {
                q.push(node->right);
            }
        }

        else
        {
            q.push(NULL);
            level++;
        }
    }

    return sum;
}
int countNodes(node *root)
{

    if (root == NULL)
    {
        return 0;
    }

    return countNodes(root->left) + countNodes(root->right) + 1;
}
int sumNode(node *root)
{

    if (root == NULL)
    {
        return 0;
    }

    return sumNode(root->left) + sumNode(root->right) + root->val;
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

int main()
{

    node *root = new node(1);

    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
   

    // preorder(root);
    // cout << endl;
    // inorder(root);
    // cout << endl;
    // postorder(root);
    // cout << endl;
    // level_order_traversal(root);
    // cout << endl;
    // cout<<countNodes(root)<<endl;
    // cout << sum_at_level(root, 1);
    // cout << sumNode(root) << endl;
    cout<<height(root)<<endl;
}