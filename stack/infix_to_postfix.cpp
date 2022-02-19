#include <iostream>
// #include <math.h>
#include <stack>

using namespace std;

int oper(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

string to_post(string s)
{
    stack<char> st;
    string n;

    cout << s;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            n = +s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                n = +st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && oper(st.top()) > oper(s[i]))
            {
                n = +st.top();
                st.pop();
            }

            st.push(s[i]);
        }

        while (!st.empty())
        {
            n = +st.top();
            st.pop();
        }
        // cout << n;
    }

    return n;
}

int main()
{
    // string s =
    // cout << in_to_post("(a-b/c)+(a/k-l)") << endl;
    string n = to_post("(a-b/c)+(a/k-l)");
    cout << n;
    return 0;
}