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
    // cout<<"printll" <<endl;
    node *temp = head;

    while (temp->link != head)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << temp->data;
    cout << endl;
}

void insertAtHead(node *&head, int val)
{

    node *newn = new node(val);
    node *temp = head;
    while (temp->link != head)
    {
        temp = temp->link;
    }

    temp->link = newn;
    newn->link = head;
    head = newn;
    // cout<<head->data<<endl;
}

void insertAtTail(node *&head, int val)
{
    node *newn = new node(val);

    if (head == NULL)
    {
        head = newn;
        newn->link = head;
        return;
    }

    node *temp = head;

    while (temp->link != head)
    {
        temp = temp->link;
    }

    temp->link = newn;
    newn->link = head;
}

void deleteAtHead(node *&head){
    node* temp = head;
    while(temp->link !=head){
        temp = temp->link;
    }

node* toDel = head;
temp->link = head->link;
head= head->link;
delete toDel;


}
void deleteN(node *&head, int pos)
{

    node *temp = head;
    int count = 1;

    if (head == NULL)
    {
        cout << "there are no elements to delete";
        return;
    }
    if (head->link == NULL)
    {
        cout << "only one element to be delted";
        node *toDel = head;
        delete toDel;
        return;
    }

    while (count < pos - 1)
    {
        temp = temp->link;
        count++;
    }

    node *toDel = temp->link;

    temp->link = toDel->link;
    cout << toDel->data << endl;

    delete toDel;
}

int main()
{
    node *head = NULL;

    insertAtTail(head, 7);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 5);
    printll(head);
    insertAtHead(head, 9);
    printll(head);
    deleteAtHead(head);
    printll(head);
}