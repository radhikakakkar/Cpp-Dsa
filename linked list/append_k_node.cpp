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

void printll(node *&head)
{

    node *temp = head;

    while (temp != NULL)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}
void insertAtTail(node *&head, int val)
{

    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}
void append(node *&head, int pos)
{
    node *temp = head;
    if (pos == 1 || temp->next == NULL)
    {

        cout << "the list will remain the same" << endl;
        return;
    }
    node *newhead;
    node *newtail;

    int count = 1;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = head;

    while (temp->next != NULL && count != pos)
    {
        count++;
        temp = temp->next;
    }
    newhead = temp->next->next;
    temp->next->next = NULL;
    newtail = temp->next;

    printll(newhead);
    // return newhead, newtail;
}

int main()
{
    node *head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    printll(head);

    append(head, 5);
    append(head, 1);
    append(head, 2);
    append(head, 3);
}
