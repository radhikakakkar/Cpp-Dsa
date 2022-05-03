#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

unordered_map<char, int> map = {{'(', -1}, {'[', -2}, {'{', -3}, {')', 1}, {']', 2}, {'}', 3}};

string isBalanced(string s)
{
    stack<char> brackets;
    bool var = true;
    for (char bracket : s)
    {
        if (map[bracket] < 0)
        {
            brackets.push(bracket);
        }
        else
        {
            if (brackets.empty())
            {
                var = false;
            }
            char top = brackets.top();
            brackets.pop();
            if (map[bracket] + map[top] != 0)
            {
                var = false;
            }
        }
    }
    if (brackets.empty() && var)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{
}