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

class queue
{
public:
    node *front;
    node *back;

    queue()
    {
        front = NULL;
        back = NULL;
    }
    void enqueue(int x)
    {
        node *n = new node(x);

        if (front == NULL)
        {
            back = n;
            front = n;
            return;
        }

        back->link = n;
        back = n;
    }
    void dequeue()
    {
        if (front == NULL)
        {
            cout << "QUEUE IS EMPTY" << endl;
        }
        node *toDel = front;
        front = front->link;
        delete toDel;
    }
    void peek()
    {
        if (front == NULL)
        {
            cout << "QUEUE IS EMPTY" << endl;
        }
        cout << front->data << endl;
        // return front->data;
    }
    bool empty()
    {
        if(front == NULL)
        {
            return true;
        }
        return false;
    }
};


int main()
{
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    // cout<<q.peek();
    q.peek();
    q.dequeue();
    q.peek();
    cout<<q.empty()<<endl;
    return 0;

}

