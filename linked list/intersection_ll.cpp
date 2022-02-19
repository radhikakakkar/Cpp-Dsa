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

int length(node *&head)
{
    int l = 0;
    node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        l++;
    }
    return l;
}
int check_intersection(node *&head1, node *&head2)
{
    int l1 = length(head1);
    int l2 = length(head2);

    // cout<<l1<<endl;
    // cout<<l2<<endl;

    node *ptr1;
    node *ptr2;

    int d = 0;

    if (l1 == l2)
    {
        cout << "after intersection, the length of both the lls has become equal" << endl;
        return 0;
    }

    if (l1 > l2)
    {
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    if (l2 > l1)
    {
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while (d)
    {
        if (ptr1 == NULL)
        {
            return -1;
        }
        ptr1 = ptr1->next;

        d--;
    }

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1->val;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return -1;
}
void create_intersection(node *&head1, node *&head2)
{
    node *temp1 = head1;
    node *temp2 = head2;

    int pos;
    cout << "Enter the value at which you want to create the intersection(the value should be from the larger linked list only): " << endl;
    cin >> pos;

    while (temp1->val != pos)
    {
        temp1 = temp1->next;
    }

    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }

    temp2->next = temp1;
}
int main()
{

    node *head1 = NULL;
    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    printll(head1);

    node *head2 = NULL;
    insertAtTail(head2, 8);
    insertAtTail(head2, 9);
    printll(head2);

    create_intersection(head1, head2);

    printll(head2); // after creating intersection
    cout << check_intersection(head1, head2) << endl;
}