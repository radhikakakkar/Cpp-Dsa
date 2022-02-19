#include <iostream>
using namespace std;

int main()
{

    int a;
    cin >> a;
    // cout << a << endl;
    int arr[a];
    int sum_arr[a];

    int i;
    for (i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
   

    int multiple;
    int divisor;

    for (int j=0; j < a; j++)
    {
       
        int sum = 0;
        multiple = 0;
        divisor = 0;
        for (int k = 0; k < a; k++)
        {
           
            if (k != j)
            {
                if (arr[j] % arr[k] == 0)
                {
                    divisor++;
                }
                if (arr[k] % arr[j] == 0)
                {
                    multiple++;
                }
            }
        }

        sum_arr[j] = multiple + divisor;
    }

    for (int l = 0; l < a; l++)
    {
        cout << sum_arr[l] << " ";
    }

    return 0;
}