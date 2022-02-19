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

node *merge(node *&head1, node *&head2)
{
    node *temp1 = head1;
    node *temp2 = head2;
    node *dummy = new node(-1);
    node *temp3 = dummy;

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->val < temp2->val)
        {
            temp3->next = temp1;
            temp1 = temp1->next;
            cout << "temp2>temp1" << endl;
        }
        else if (temp1->val > temp2->val)
        {
            temp3->next = temp2;
            temp2 = temp2->next;
            cout << "temp2<temp1" << endl;
        }
        else if (temp1->val == temp2->val)
        {
            temp3->next = temp1;
            temp1 = temp1->next;
            temp2 = temp2->next;
            cout << "temp2=temp1" << endl;
        }

        temp3 = temp3->next;
    }

    while (temp2 != NULL)
    {
        cout << "temp2 not yet finished" << endl;
        temp3->next = temp2;
        temp2 = temp2->next;
        temp3 = temp3->next;
    }
    while (temp1 != NULL)
    {
        temp3->next = temp1;
        temp1 = temp1->next;
        temp3 = temp3->next;
        cout << "temp1 not yet finished" << endl;
    }

    temp3->next = NULL;
    return dummy->next;
}
node *merge_recursive(node *&head1, node *&head2)
{
    if (head1 == NULL)
    {
        return head1;
    }
    if (head2 == NULL)
    {
        return head2;
    }
    node *result;
    if (head1->val < head2->val)
    {
        result = head1;
        result->next = merge_recursive(head1->next, head2);
    }
    else if (head1->val > head2->val)
    {
        result = head2;
        result->next = merge_recursive(head1, head2->next);
    }
    else if (head1->val == head2->val)
    {
        result = head1;
        result->next = merge_recursive(head1->next, head2->next);
    }

    return result;
}
int main()
{
    node *head1 = NULL;
    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    cout << "The first ll is as follows: ";
    printll(head1);

    node *head2 = NULL;
    insertAtTail(head2, 6);
    insertAtTail(head2, 9);
    insertAtTail(head2, 10);
    cout << "The second ll is as follows: ";
    printll(head2);

    node *newhead = merge(head1, head2);
    cout << "The final ll is as follows(merge): ";
    printll(newhead);

    node *newhead2 = merge_recursive(head1, head2);
    cout << "The final ll is as follows(merge_recursive): ";
    printll(newhead2);
}