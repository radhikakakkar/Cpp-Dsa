#include <iostream>
#include <stack>
using namespace std;

bool check(string s)
{
    stack<char> st;
    bool ans = true;

    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == '{' || s[i] == '[' || s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (!st.empty() && s[i] == '}')
        {
            if (st.top() == '{')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == ']')
        {
            if (!st.empty() && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        // else if (s[i] == ' ')
        // {
        //     ans = false;
        // }
        else
        {
            return false;
        }
    }

    return ans;
}
int main()
{
    string brackets = "{(([])[])[]]}";
    if (check(brackets) == 1)
    {
        cout << "The brackets are balanced" << endl;
    }
    else
    {
        cout << "The brackets are not balanced" << endl;
    }
}