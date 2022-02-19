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

void makeCycle(node *&head, int pos)
{
    node *temp = head;
    node *startnode;
    int count = 1;

    while (temp->next != NULL)
    {

        if (count == pos)
        {
            startnode = temp;
            cout << "the startnode equals : " << startnode->data << endl;
        }
        temp = temp->next;
        count++;
    }

    temp->next = startnode;
}

bool checkCycle(node *&head)
{
    node *slow = head;
    node *fast = head;

    while (fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            return true;
        }
    }

    return false;
}
void deleteCycle(node *&head)
{
    node *slow = head;
    node *fast = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    fast = head;

    if (slow->next != fast->next)
    {

        slow = slow->next;
        fast = fast->next;
    }
    slow->next= NULL;
}

void insertAtTail(node *&head, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
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

    makeCycle(head, 2);
    cout << checkCycle(head) << endl;
    deleteCycle(head);
    cout << checkCycle(head) << endl;
}