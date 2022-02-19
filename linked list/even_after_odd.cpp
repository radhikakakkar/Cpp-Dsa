#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *link;

    node(int val)
    {
        data = val;
        link = NULL;
    }
};

void printll(node *&head)
{
    // cout<<"printll"<<endl;
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
}
void insertAtTail(node *&head, int val)
{
    node *newn = new node(val);
    if (head == NULL)
    {
        head = newn;
        return;
    }
    node *temp = head;
    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = newn;
}
void evenAfterOdd(node *&head)
{
    // cout<<"evenafterodd"<<endl;
    node *odd = head;
    node *even = head->link;
    node *evenStart = even;

    while (even->link != NULL && odd->link != NULL)
    {
        cout<<"evenafterodd"<<endl;
        odd->link = even->link;
        odd = odd->link;
        even->link = odd->link;
        even = even->link;
    }


    odd->link = evenStart;
    // cout<<odd->link<<endl;
    if (odd->link != NULL)
    { 
        even->link = NULL;
    }
     
    
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
    cout<<endl;
    
    evenAfterOdd(head);
    // printll(head);
    cout<<endl;

    return 0;
}
