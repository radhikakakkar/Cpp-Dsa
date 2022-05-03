#include <iostream>
using namespace std;
bool check_palindrome(string num, int si, int ei)
{
    if (si >= ei)
    {
        return true;
    }
    else if (num[si] == num[ei])
    {
        check_palindrome(num, si++, ei--);
    }

    else
    {
        return false;
    }
    return true;
}
int main()
{
    string num;
    cout << "enter the string of numbers to be evaluated : " << endl;
    cin >> num;

    cout << num.length() << endl;

    int si = 0;
    int ei = num.size() - 1;
    bool ans = check_palindrome(num, si, ei);
    cout << ans;
}