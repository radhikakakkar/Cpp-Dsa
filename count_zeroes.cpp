#include <iostream>
using namespace std;

int count_zeroes(int num)
{
    int count;
    if (num == 0)
    {
        return 0;
    }
    if (num % 10 == 0)
    {
        count++;
    }

    count_zeroes(num % 10);
    
    return count;
}
int main()
{
    int num;
    cout << "Enter the integer to be evaluated: " << endl;
    cin >> num;
}