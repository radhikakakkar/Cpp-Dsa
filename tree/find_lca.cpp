#include <iostream>
#include <vector>
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

bool getP(node *root, int key, vector<int> &path)
{
    if (root == NULL)
    {
        return false;
    }
    path.push_back(root->data);

    if (root->data == key)
    {
        return true;
    }

    if (getP(root->left, key, path) || getP(root->right, key, path))
    {
        return true;
    }

    path.pop_back();
    return false;
}
int find_lca(node *root, int n1, int n2)
{
    vector<int> path1, path2;

    if (!getP(root, n1, path1) || !getP(root, n2, path2))
    {
        return -1;
    }

    int pc;
    for (pc = 0; pc < path1.size() && path2.size(); pc++)
    {
        if (path1[pc] != path2[pc])
        {
            break;
        }
    }
    int lca = path1[pc - 1];
    return lca;
}
int main()

{

    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->right->left = new node(5);
    root->right->right = new node(6);
    root->right->left->left = new node(7);
    int n1 = 4;
    int n2 = 5;
    int lca = find_lca(root, n1, n2);
    if (lca == -1)
    {
        cout << "LCA doesn't exist" << endl;
    }
    else
    {
        cout << "LCA is:" << lca << endl;
    }

    return 0;
}
