#include <iostream>
#include <cmath>
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

node *
createBST(int arr[], int start, int n)
{

    if (start > n)
    {
        return NULL;
    }
    int mid = (start + n) / 2;

    node *root = new node(arr[mid]);

    root->left = createBST(arr, start, mid - 1);

    root->right = createBST(arr, mid + 1, n);

    return root;
}

node *
print_pre(node *root)
{
    // cout << "inside print" << endl;

    if (root == NULL)
    {
        return NULL;
    }
    cout << root->data << " ";
    print_pre(root->left);

    print_pre(root->right);

    return root;
}

int main()
{
    int arr[] = {10,
                 20,
                 30,
                 40,
                 50};
    node *root = createBST(arr, 0, 4);

    print_pre(root);

    return 0;
}
