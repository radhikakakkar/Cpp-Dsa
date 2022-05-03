#include <iostream>
#include <vector>
#include <math.h>
// #include <bits/stdc++.h>
// #define
using namespace std;

void insert_heap(int heap[], int n)
{
    int element;
    cout << " Enter the element to be inserted : ";
    cin >> element;
    // int n = heap.length();
     n = n+1;
    // heap.push_back(element);
    heap[n] = element;
    // int i = heap.size();

    while (n > 0)
    {

        int parent = floor(n / 2);
        if (heap[parent] > element)
        {
            swap(heap[parent], element);
            n = parent;
        }
        else
        {
            return;
        }
    }
}
int main()
{
    // vector<int> heap;
    int heap[5];
    int element;
    int j = 0;
    int i =0;
    cout << "Enter the heap elements: "<<endl;
    for (j = 0; j < 5; j++)
    {
        // cout<<"heap elements input"<<endl;
        cin >> element;
        // heap.push_back(element);
        heap[j] = element;
    }

    cout << " Current heap: ";
    for ( i = 0; i < 5; i++)
    {
        cout << heap[i];
    }

    insert_heap(heap, 5);

    return 0;
}