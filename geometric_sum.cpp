#include <iostream>
using namespace std;

int sum(int num)
{
    
    if (num == 0)
    {
        return 0;
    }
    return (sum(num/10) + num % 10);
}
int main()
{
    int num;
    cout << "enter the number to be added: " << endl;
    cin >> num;
    int ans = sum(num);
    cout<<ans;
    
}