#include <iostream>
using namespace std;

class node
{
public:
    int val;
    node *next;

    node(int data)
    {
        val = data;
        next = NULL;
    }
};

void insertAtTail(node *&head, int data)
{

    node *n = new node(data);

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
void deleteAtHead(node *&head)
{

    node *toDelete = head;
    head = head->next;

    delete toDelete;
    // return head;
}
void deleteNode(node *&head, int data)
{
    // cout << head->val << endl;

    if (head == NULL)
    {
        cout << "no element to delete in the ll" << endl;
        return;
    }
    if (head->next == NULL)
    {
        cout << "only one element to delete in the ll" << endl;
        deleteAtHead(head);
        return;
    }
    if (head->val == data)
    {
        cout << "head is getting deleted" << endl;
        deleteAtHead(head);
        return;
    }

    node *temp = head;

    while (temp->next->val != data)
    {
        temp = temp->next;
    }

    node *toDelete = temp->next;

    if (temp->next->next != NULL)
    {
        temp->next = temp->next->next;
    }
    else
    {
        temp->next = NULL;
    }

    delete toDelete;
}

void printll(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    printll(head);
    deleteNode(head, 4);
    printll(head);
}