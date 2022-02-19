#include <iostream>
using namespace std;

void swap(int *out, int *in)
{

    int temp = *out;
    *out = *in;
    *in = temp;
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int arr_a[n];
    int arr_b[m];

    for (int i = 0; i < n; i++)
    {
        cin >> arr_a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr_b[i];
    }

    // for (int out = 0; out < m; out++)
    // {
    //     // cout << "out" << endl;
    //     for (int in = 1; in < m; in++)
    //     {
    //         if (arr_a[out] < arr_a[in])
    //         {
    //             swap(arr_a[out], arr_a[in]);
    //         }
    //     }
    // }

    for (int out = 0; out < n; out++)
    {
        for (int in = 0; in < n; in++)
        {
            if (arr_b[in] < arr_b[in+1])
            {
                swap(&arr_b[in], &arr_b[in+1]);
            }
        }
    }

    // for (int i = 0; i < m; i++)
    // {
    //     cout << arr_a[i];
    //     cout<<endl;
    // }
    for (int i = 0; i < n; i++)
    {
        cout << arr_b[i];
        
    }
    cout<<endl;
    

    // int ele = 0;
    // int sum = 0;

    // while (ele <= k)
    // {
    //     for (int i = 0; i < m; i++)
    //     {
    //         if (arr_a[i] > arr_b[i])
    //         {
    //             sum = sum + arr_a[i];
    //         }
    //         else if (arr_a[i] < arr_b[i])
    //         {
    //             sum = sum + arr_b[i];
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    //     k++;
    // }

    // cout << sum;
    return 0;
}