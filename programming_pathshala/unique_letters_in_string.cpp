#include <iostream>
using namespace std;

int main()
{

    cout << "enter the number of letters in the string: " << endl;
    int a;
    cin >> a;

    cout << "enter the letters in the string: " << endl;
    string str[a];
    for (int i = 0; i < a; i++)
    {
        cin >> str[i];
    }

    int count = 1;
    for (int i = 0; i < a - 1; i++)
    {
        if (str[i] != str[i + 1])
        {
            count++;
        }
    }

    cout << "the number of unique letters are: " << count << endl;
}
