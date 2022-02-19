#include <iostream>
#include <climits>
using namespace std;

struct node
{
    int data;
    node *right, *left;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
node *constructBST(int pre[], int key, int *preIDX, int min, int max, int n)
{
    if (*preIDX >= n)
    {
        return NULL;
    }
    node *root = NULL;
    if (key > min && key < max)
    {
        root = new node(key);
        *preIDX = *preIDX + 1;

        if (*preIDX < n)
        {
            root->left = constructBST(pre, pre[*preIDX], preIDX, min, key, n);
        }
        if (*preIDX < n)
        {
            root->right = constructBST(pre, pre[*preIDX], preIDX, key, max, n);
        }
    }

    return root;
}
void print_tree(node *root)
{
    // cout << "inside print" << endl;
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    print_tree(root->left);
    print_tree(root->right);
}
int main()
{
    // node* root = new node;
    int pre[] = {10, 2, 1, 13, 11};
    int n = 5;
    int preIDX = 0;
    node *root = constructBST(pre, pre[preIDX], &preIDX, INT_MIN, INT_MAX, n);
    print_tree(root);
    return 0;
}