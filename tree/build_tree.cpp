#include <iostream>
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
int search(int inorder[], int start, int end, int curr)
{
    int i;
    for (i = start; i <= end; i++)
    {

        if (inorder[i] == curr)
        {
            return i;
        }
    }
    return 0;
}

node *buildTree(int preorder[], int inorder[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }

    // cout<<"buildtree"<<endl;
    int index = 0;
    int curr = preorder[index];
    index++;

    node *nodee = new node(curr);

    if (start == end)
    {
        return nodee;
    }

    int pos = search(inorder, start, end, curr);
    // cout<<pos<<endl;
    nodee->left = buildTree(preorder, inorder, start, pos - 1);
    nodee->right = buildTree(preorder, inorder, pos + 1, end);

    return nodee;
};
void displayIn(node *root)
{

    if (root == NULL)
    {
        cout << "no element inside the tree";
    }
    cout << "displayIn" << endl;

    displayIn(root->left);
    cout << root->val << " ";
    displayIn(root->right);
}
int main()
{

    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};

    // int start = 0;
    // int inSize = sizeof(inorder) / sizeof(inorder[0]);
    // int end = inSize;
    // int end = 4;

    node *root = buildTree(preorder, inorder, 0, 4);
    displayIn(root);
}
