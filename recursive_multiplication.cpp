#include <iostream>
using namespace std;

int mult(int m, int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (m + mult(m, --n));
}
int main()
{
    int m, n;
    cout << "Enter the values of m & n: " << endl;
    cin >> m >> n;
    int ans = mult(m, n);
    cout << ans;
}
