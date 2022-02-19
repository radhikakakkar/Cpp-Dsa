#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *next;

    node(int val)
    {

        data = val;
        next = NULL;
    }
};

void insertATail(node *&head, int val)
{

    node *newNode = new node(val);

    // cout << head << endl;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}
void printll(node *&head)
{

    if (head == NULL)
    {
        cout << "No elements present in the linked list" << endl;
    }

    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

//iterartive method
void reverse_ll(node *&head)
{
    node *previous = NULL;
    node *current = head;
    node *next;

    while (current != NULL)
    {
        next = current->next;
        current->next = previous;

        previous = current;
        current = next;
    }

    head = previous;
    printll(head);
}
//recursive method

void reverse_ll2(node *&head)
{
    
}
int main()
{

    node *head = NULL;

    insertATail(head, 2);
    insertATail(head, 4);
    insertATail(head, 6);
    insertATail(head, 7);
    insertATail(head, 9);

    printll(head);
    reverse_ll(head);

    return 0;
}
