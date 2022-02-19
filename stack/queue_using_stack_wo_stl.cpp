#include <iostream>
using namespace std;
#define n 5

class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int val)
    {

        if (top == n - 1)
        {
            cout << "overflow";
        }
        top++;
        arr[top] = val;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "underflow";
            return;
        }

        int topval = arr[top];
        // cout << "the popped element is " << topval << endl;
        top--;
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "underflow";
            return -1;
        }

        // cout << arr[top] << endl;
        int peek_val = arr[top];
        return peek_val;
    }
    bool empty()
    {

        if (top == -1)
        {
            return true;
        }
        return false;
    }
    int st_top()
    {

        return arr[top];
    }
};

class queue
{

public:
    stack st1;
    stack st2;
    void enqueue(int val)
    {
        st1.push(val);
    }
    void dequeue()
    {
        int topval;
        if (st1.empty() && st2.empty())
        {
            cout << "queue is empty";
            return;
        }

        else if (st2.empty())
        {
            while (!st1.empty())
            {
                st2.push(st1.st_top());
                st1.pop();
            }
        }

        topval = st2.st_top();
        st2.pop();
        cout << "the popped element from the queue is" << topval << endl;
    }

    void peek()
    {

        if (st1.empty())
        {
            return;
        }
        cout << "the peek element in the queue is" << st1.peek() << endl;
    }
    bool empty()
    {
        if (!st1.empty() && st2.empty() || st1.empty() && !st2.empty())
        {
            return false;
        }
        return true;
    }
};

int main()
{

    // stack st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);

    // st.pop();
    // st.pop();
    // st.peek();

    queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.peek();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout<<endl;

    cout<<q.empty()<<endl;

    return 0;
}