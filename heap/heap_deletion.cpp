#include <iostream>
using namespace std;

void heap_del(int heap[], int n)
{

    heap[1] = heap[n];
    n = n - 1;
    int i = 1;

    while (i < n)
    {
        int left = heap[2 * i];
        int right = heap[(2 * i) + 1];

        int larger = left > right ? left : right;
        if (heap[i] > larger)
        {
            swap(heap[i], larger);
            i = larger;
        }
        else
        {
            return;
        }
    }

    
}
int main()
{
    int n;
    cout << "Enter the umber of elements in the heap: ";
    cin >> n;
    int heap[n];

    for (int i = 0; i < n; i++)
    {
        cin >> heap[i];
    }

    heap_del(heap, n);


    return 0;
}