#include <iostream>
using namespace std;
#define n 5

class queue
{
public:
    int front;
    int rear;
    int *arr;

    queue()
    {
        front = -1;
        rear = -1;
        arr = new int[n];
    }
    void enqueue(int val)
    {
        // cout << rear << endl;
        if (rear == n - 1)
        {
            cout << "why" << endl;
            cout << "queue overflow" << endl;
            return ;
        }

        rear++;
        arr[rear] = val;
        // return rear;
    }
    void dequeue()

    {
        if (rear == -1)
        {
            cout << "queue underflow" << endl;
            return;
        }
        int toDel = arr[front];
        front++;
        // delete toDel;
    }

    void display()
    {
        if (rear == -1)
        {
            cout << "no items to display" << endl;
            return;
        }
        else
        {
            while (front < rear)
            {
                front++;
                cout << arr[front] << " ";
            }
        }
    }
    bool empty()
    {

        if (rear == front)
        {
            return true;
        }
        return false;
    }
};

class stack
{
public:
    queue q1;
    queue q2;
    // int s = 0;
    // int top_p = -1;

    void push(int val)
    {
        q2.enqueue(val);

        while (!q1.empty())
        {
            q2.enqueue(q1.front);
            q1.dequeue();
        }

        queue temp = q1;
        q1 = q2;
        q2 = temp;
    }

    void pop()
    {

        q1.dequeue();
    }
    int top()
    {
        return q1.rear;
    }

    void show_stack()
    {
        q1.display();
    }
    bool empty_stack()
    {
        return q1.empty();
    }
};

int main()
{

    stack st;

    st.push(7);
    // st.show_stack();
    // cout << endl;
    st.push(2);
    cout<<st.top()<<endl;
    // st.show_stack();
    // cout << endl;
    // st.push(3);
    // st.push(4);

    // st.show_stack();
    // cout<<endl;
    // st.pop();
    // st.show_stack();
    // cout<<endl;
}