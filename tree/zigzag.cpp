#include <iostream>
#include <stack>
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

void zigzag(node *root)
{

    if (root == NULL)
    {
        return;
    }

    stack<node *> current;
    stack<node *> next;

    current.push(root);
    bool ltr = true;

    while (!current.empty())
    {
        // cout << "inside current not empty" << endl;
        node *temp = current.top();
        current.pop();

        if (temp)
        {
            cout << temp->data << " ";

            if (ltr)
            {
                if (temp->left)
                {
                    next.push(temp->left);
                }
                if (temp->right)
                {
                    next.push(temp->right);
                }
            }
            else
            {

                if (temp->right)
                {
                    next.push(temp->right);
                }
                if (temp->left)
                {
                    next.push(temp->left);
                }
            }
        }
        if (current.empty())
        {
            swap(current, next);
            ltr = !ltr;
        }
    }
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->right = new node(4);
    root->right->right = new node(5);
    // root->left->right->left = new node(6);
    // root->left->right->right = new node(7);

    zigzag(root);
    cout << endl;
}
